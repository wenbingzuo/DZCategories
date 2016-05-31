//
//  UIButton+DZAdd.m
//  DZCategories
//
//  Created by Wenbing Zuo on 4/10/16.
//  Copyright © 2016 DaZuo. All rights reserved.
//

#import "UIButton+DZAdd.h"

@implementation UIButton (DZButtonAlignment)

- (void)dz_setImageAlignment:(DZButtonImageAlignment)imageAlignment spacing:(CGFloat)spacing {
    [self dz_resetEdgeInsets];
    [self setNeedsLayout];
    [self layoutIfNeeded];
    
    CGRect contentRect = [self contentRectForBounds:self.bounds];
    CGSize titleSize = [self titleRectForContentRect:contentRect].size;
    CGSize imageSize = [self imageRectForContentRect:contentRect].size;
    CGFloat halfWidth = (titleSize.width + imageSize.width)/2.0;
    CGFloat halfHeight = (titleSize.height + imageSize.height)/2.0;
    CGFloat topInset = MIN(halfHeight, titleSize.height);
    CGFloat leftInset = (titleSize.width - imageSize.width)>0?(titleSize.width - imageSize.width)/2:0;
    CGFloat bottomInset = (titleSize.height - imageSize.height)>0?(titleSize.height - imageSize.height)/2:0;
    CGFloat rightInset = MIN(halfWidth, titleSize.width);

    
    switch (imageAlignment) {
        case DZButtonImageAlignmentLeft:
            self.titleEdgeInsets = UIEdgeInsetsMake(0.0, spacing, 0.0, -spacing);
            self.contentEdgeInsets = UIEdgeInsetsMake(0.0, 0.0, 0.0, spacing);
            break;
        case DZButtonImageAlignmentRight:
            self.imageEdgeInsets = UIEdgeInsetsMake(0.0, titleSize.width+spacing, 0.0, -titleSize.width-spacing);
            self.titleEdgeInsets = UIEdgeInsetsMake(0.0, -imageSize.width, 0.0, imageSize.width);
            self.contentEdgeInsets = UIEdgeInsetsMake(0.0, 0.0, 0.0, spacing);
            break;
        case DZButtonImageAlignmentTop:
            self.titleEdgeInsets = UIEdgeInsetsMake(imageSize.height+spacing, -halfWidth, -titleSize.height-spacing, halfWidth);
            self.contentEdgeInsets = UIEdgeInsetsMake(-bottomInset, leftInset, topInset+spacing, -rightInset);
            break;
        case DZButtonImageAlignmentBottom:
            self.titleEdgeInsets = UIEdgeInsetsMake(-titleSize.height-spacing, - halfWidth, imageSize.height+spacing, halfWidth);
            self.contentEdgeInsets = UIEdgeInsetsMake(topInset+spacing, leftInset, -bottomInset, -rightInset);
            break;
        default:
            break;
    }
}

- (void)dz_resetEdgeInsets {
    self.imageEdgeInsets = UIEdgeInsetsZero;
    self.titleEdgeInsets = UIEdgeInsetsZero;
    self.contentEdgeInsets = UIEdgeInsetsZero;
}

@end
