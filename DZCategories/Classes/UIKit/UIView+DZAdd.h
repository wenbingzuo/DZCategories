//
//  UIView+DZAdd.h
//  DZCategories
//
//  Created by Wenbing Zuo on 4/8/16.
//  Copyright © 2016 DaZuo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (DZViewHierarchy)

/**
 *  Find the specifical subView of receiver.
 *
 *  @param aClass the class of subView.
 *
 *  @return The subView of class `aClass`, nil if not found.
 */
- (id)dz_subViewOfClass:(Class)aClass;

/**
 *  Find the specifical superView of receiver.
 *
 *  @param aClass the class of superView.
 *
 *  @return The superView of class `aClass`, nil if not found.
 */
- (id)dz_superViewOfClass:(Class)aClass;

@end

NS_ASSUME_NONNULL_END