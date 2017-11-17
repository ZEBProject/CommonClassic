//
//  NSDictionary+tool.h
//  PAiPhoneESalesNew
//
//  Created by 周亮亮 on 2017/6/28.
//  Copyright © 2017年 PingAn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (tool)

/**
 判断字典是否存在的方法

 @param str 通过判断的字典
 @return 通过bool值判断是否存在
 */
+ (BOOL)judgeNSDictionaryExist:(NSDictionary *)str;
@end
