//
//  UIView+Category.h
//  ZEB_category
//
//  Created by 周亮亮(外包) on 2017/11/3.
//  Copyright © 2017年 周亮亮(外包). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Category)

//把View加在Window上
- (void) addToWindow;

@end

@interface UIView (Screenshot)

//View截图
- (UIImage*) screenshot;

//ScrollView截图 contentOffset
- (UIImage*) screenshotForScrollViewWithContentOffset:(CGPoint)contentOffset;

//View按Rect截图
- (UIImage*) screenshotInFrame:(CGRect)frame;

@end

@interface UIView (Animation)

//左右抖动动画
- (void) shakeAnimation;

//旋转180度
- (void) trans180DegreeAnimation;

@end

