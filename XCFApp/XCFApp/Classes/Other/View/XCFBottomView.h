//
//  XCFBottomView.h
//  XCFApp
//
//  Created by 彭世朋 on 16/4/10.
//  Copyright © 2016年 Joey. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface XCFBottomView : UIView
/** 回调block */
@property (nonatomic, strong) void (^actionBlock)(NSInteger);

@end
