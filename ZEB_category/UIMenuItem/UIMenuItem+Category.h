//
//  UIMenuItem+Category.h
//  ZEB_category
//
//  Created by 周亮亮(外包) on 2017/11/3.
//  Copyright © 2017年 周亮亮(外包). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIMenuItem (Category)

- (instancetype)initWithTitle:(NSString *)title actionBlock:(void (^)(id sender))block;

@end
