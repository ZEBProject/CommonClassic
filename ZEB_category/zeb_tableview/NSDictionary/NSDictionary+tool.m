//
//  NSDictionary+tool.m
//  PAiPhoneESalesNew
//
//  Created by 周亮亮(外包) on 2017/6/28.
//  Copyright © 2017年 PingAn. All rights reserved.
//

#import "NSDictionary+tool.h"

@implementation NSDictionary (tool)

+ (BOOL)judgeNSDictionaryExist:(NSDictionary *)str{
    if ([str isKindOfClass:[NSDictionary class]] &&
        str !=nil &&
        ![str isKindOfClass:[NSNull class]] &&
        str.count> 0){
        return YES;
    }
    return NO;
}
@end
