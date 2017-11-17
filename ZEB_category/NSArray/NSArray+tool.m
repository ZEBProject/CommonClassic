//
//  NSArray+tool.m
//  PAiPhoneESalesNew
//
//  Created by 周亮亮(外包) on 2017/6/28.
//  Copyright © 2017年 PingAn. All rights reserved.
//

#import "NSArray+tool.h"

@implementation NSArray (tool)

+ (BOOL)judgeNSArrayExist:(NSArray *)str{
    if ([str isKindOfClass:[NSArray class]] &&
        str !=nil &&
        ![str isKindOfClass:[NSNull class]] &&
        str.count> 0){
        return YES;
    }
    return NO;
    
    
}
@end
