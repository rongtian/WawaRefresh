//
//  UIScrollView+WawaFootRefresh.h
//  R
//
//  Created by 荣守振 on 2018/1/19.
//  Copyright © 2018年 Shengshui. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WawaFootRefreshView;

static const CGFloat   WAWAFOOTVIEWHEIGHT = 64.0f;

typedef NS_ENUM(NSUInteger, WawaFootRefreshPosition) {
    WawaFootRefreshPositionScrollViewBottom,
    WawaFootRefreshPositionContentBottom /** sb模式 */
};


NS_ASSUME_NONNULL_BEGIN
@interface UIScrollView (WawaFootRefresh)

@property (nonatomic, assign, readonly) BOOL isShowFootRefresh;
@property (nullable, nonatomic, strong, readonly) WawaFootRefreshView *wawaFootRefresh;

- (void)wawaFootRefresh:(dispatch_block_t _Nonnull )actionHandler;

@end
NS_ASSUME_NONNULL_END


NS_ASSUME_NONNULL_BEGIN
@interface WawaFootRefreshView: UIView

@property (nonatomic) WawaFootRefreshPosition footRefreshPosition;

///////////////////////// extent ////////////////////////////////////////////////
@property (nonatomic, readwrite) UIActivityIndicatorViewStyle activityIndicatorViewStyle;

- (void)stopAnimation;

@end
NS_ASSUME_NONNULL_END