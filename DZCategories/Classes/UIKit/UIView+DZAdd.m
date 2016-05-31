//
//  UIView+DZAdd.m
//  DZCategories
//
//  Created by Wenbing Zuo on 4/8/16.
//  Copyright © 2016 DaZuo. All rights reserved.
//

#import "UIView+DZAdd.h"

@implementation UIView (DZViewHierarchy)

- (id)dz_subViewOfClass:(Class)aClass {
    for (id subView in self.subviews) {
        if ([subView isKindOfClass:aClass]) {
            return subView;
        } else {
            id view = [subView dz_subViewOfClass:aClass];
            if (view) {
                return view;
            }
        }
    }
    return nil;
}

- (id)dz_superViewOfClass:(Class)aClass {
    id superView = self.superview;
    if ([superView isKindOfClass:[aClass class]]) {
        return superView;
    } else if (!superView) {
        return nil;
    } else {
        return [superView dz_superViewOfClass:aClass];
    }
}

@end
