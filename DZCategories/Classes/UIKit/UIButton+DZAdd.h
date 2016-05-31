//
//  UIButton+DZAdd.h
//  DZCategories
//
//  Created by Wenbing Zuo on 4/10/16.
//  Copyright © 2016 DaZuo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, DZButtonImageAlignment) {
    DZButtonImageAlignmentLeft = 0,
    DZButtonImageAlignmentRight,
    DZButtonImageAlignmentTop,
    DZButtonImageAlignmentBottom
};

@interface UIButton (DZButtonAlignment)

/**
 *  Adjust the `imageView` and `titleLabel` position with certain alignment and spacing.
 *  @discussion This method needs `imageView` and `titleLabel` both set. Call it after set frame or 
 *              constraints.
 *  @see https://github.com/lianchengjiang/LCUIKit
 *  @param imageAlignment The alignment of `imageView`.
 *  @param spacing        The distance between `imageView` and `titleLabel`.
 */
- (void)dz_setImageAlignment:(DZButtonImageAlignment)imageAlignment spacing:(CGFloat)spacing;

@end

NS_ASSUME_NONNULL_END