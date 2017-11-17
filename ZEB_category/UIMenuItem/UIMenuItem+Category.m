//
//  UIMenuItem+Category.m
//  ZEB_category
//
//  Created by 周亮亮(外包) on 2017/11/3.
//  Copyright © 2017年 周亮亮(外包). All rights reserved.
//

#import "UIMenuItem+Category.h"
#import <objc/runtime.h>
static int UIMenuItem_key;

@implementation UIMenuItem (Category)

- (instancetype)initWithTitle:(NSString *)title actionBlock:(void (^)(id sender))block{
    self = [self initWithTitle:title action:@selector(invoke:)];
    objc_setAssociatedObject(self, &UIMenuItem_key, block, OBJC_ASSOCIATION_COPY_NONATOMIC);
    return self;
}

- (void)invoke:(id)sender {
    void(^block)() = objc_getAssociatedObject(self, &UIMenuItem_key);
    if(block){
        block();
    }
    
}
@end
