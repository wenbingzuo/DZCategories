//
//  UIDevice+DZAdd.h
//  DZCategories
//
//  Created by Wenbing Zuo on 4/11/16.
//  Copyright © 2016 DaZuo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (DZDeviceInfo)

/// Return the device system version.
@property (nonatomic, assign, readonly) double dz_systemVersion;

/// Whether the device is iPad.
@property (nonatomic, assign, readonly) BOOL dz_isPad;

/// Whether the device is simulator.
@property (nonatomic, assign, readonly) BOOL dz_isSimulator;

/// Whether the device is jailbroken
@property (nonatomic, assign, readonly) BOOL dz_isJailbroken;

/**
 *  The device's machine model. e.g. "iPhone8,2"
 *  @see https://www.theiphonewiki.com/wiki/Models
 */
@property (nonatomic, strong, readonly) NSString *dz_machineModel;

/**
 *  The device's machine model name. e.g. "iPhone 6s Plus"
 *  @see https://www.theiphonewiki.com/wiki/Models
 */
@property (nonatomic, strong, readonly) NSString *dz_machineModelName;

@end



@interface UIDevice (DZDeviceSpace)

#pragma mark - Disk Space

/// Total disk space in byte (-1 when error occurs).
@property (nonatomic, assign, readonly) int64_t dz_diskSpace;

/// Total free disk space in byte (-1 when error occurs).
@property (nonatomic, assign, readonly) int64_t dz_diskSpaceFree;

/// Total used disk space in byte (-1 when error occurs).
@property (nonatomic, assign, readonly) int64_t dz_diskSpaceUsed;

#pragma mark - Memory Space

/// Total memory space in byte (-1 when error occurs).
@property (nonatomic, assign, readonly) int64_t dz_memorySpace;

/// Total used memory space in byte (-1 when error occurs).
@property (nonatomic, assign, readonly) int64_t dz_memorySpaceUsed;

@end

NS_ASSUME_NONNULL_END

#ifndef kSystemVersion
#define kSystemVersion [UIDevice currentDevice].dz_systemVersion
#endif

#ifndef kiOS6Later
#define kiOS6Later (kSystemVersion >= 6.0)
#endif

#ifndef kiOS7Later
#define kiOS7Later (kSystemVersion >= 7.0)
#endif

#ifndef kiOS8Later
#define kiOS8Later (kSystemVersion >= 8.0)
#endif

#ifndef kiOS9Later
#define kiOS9Later (kSystemVersion >= 9.0)
#endif