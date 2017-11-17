//
//  UIButton+tool.h
//  ZEB_category
//
//  Created by 周亮亮 on 2017/11/3.
//  Copyright © 2017年 周亮亮. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ButtonActionCallBack)(UIButton *button);
@interface UIButton (tool)

-(void)addCallBackAction:(ButtonActionCallBack)action
        forControlEvents:(UIControlEvents)controlEvents;

-(void)addCallBackAction:(ButtonActionCallBack)action;

/**
 *  扩大 UIButton 的點擊範圍
 *  控制上下左右的延長範圍
 *
 *  @param top    上
 *  @param right  右
 *  @param bottom 下
 *  @param left   左
 */
- (void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;


@end
