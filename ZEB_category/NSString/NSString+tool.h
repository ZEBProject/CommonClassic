//
//  NSString+tool.h
//  PAiPhoneESalesNew
//
//  Created by 周亮亮 on 2017/6/27.
//  Copyright © 2017年 PingAn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (tool)
#pragma mark - 解码方法
+ (NSString *)replaceUnicode:(NSString *)unicodeStr;

#pragma mark - 时间工具
///===================================================================
///获取无参数时间戳
///===================================================================
/**
 时间戳
 */
+ (NSString *)getTimeStamp;

/**
 通过时间戳自己设计格式返回时间
 
 @param timestamp 后台返回的时间戳
 @param format 想要的时间格式
 @return 返回的时间
 */
+ (NSString *)timestampSwitchTime:(NSInteger)timestamp andFormatter:(NSString *)format;

/**
 /将某个时间转化成 时间戳
 
 @param formatTime 时间
 @param format 时间格式
 @return 时间戳
 */
+ (NSInteger)timeSwitchTimestamp:(NSString *)formatTime andFormatter:(NSString *)format;
//将某个时间转化成 时间戳

#pragma mark -显示阅读数

/**
 阅读数量显示
 @param visitCount 后台返回的阅读数量
 @return 根据后台返回的阅读数量得到w或者亿
 */
+ (NSString *)getVisitCount:(NSString *)visitCount;

/**
 判断字符串是否存在
 
 @param str 需要判断的字符串
 @return 返回字符串或者0
 */
+ (BOOL)judgeNSStringExist:(NSString *)str;



/**
 计算文字高度，可以处理计算带行间距的
 
 @param size 文本的宽度，以及设置的最大高度
 @param font 字体大小
 @param lineSpacing 行间距
 @return 文字高度
 */
- (CGSize)boundingRectWithSize:(CGSize)size font:(UIFont*)font  lineSpacing:(CGFloat)lineSpacing;

/**
 计算最大行数文字高度,可以处理计算带行间距的
 
 @param size 文本的宽度，以及设置的最大高度
 @param font 字体大小
 @param lineSpacing 行间距
 @param maxLines 最大行
 @return 最大行数文字高度
 */
- (CGFloat)boundingRectWithSize:(CGSize)size font:(UIFont*)font  lineSpacing:(CGFloat)lineSpacing maxLines:(NSInteger)maxLines;
/**
 //去掉前后空格
 
 @return <#return value description#>
 */
- (NSString*) trimmedString;
/**
 银行卡号中间8位*显示
 
 @param accountNo 银行卡号
 @return <#return value description#>
 */
+ (NSString*) getSecrectStringWithAccountNo:(NSString*)accountNo;


/**
 转为手机格式，默认为-
 
 @param mobile 手机号
 @return <#return value description#>
 */
+ (NSString*) stringMobileFormat:(NSString*)mobile;

- (NSString *) md5WithString;//MD5加密
@end
