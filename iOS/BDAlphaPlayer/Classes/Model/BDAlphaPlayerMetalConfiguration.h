//
//  BDAlphaPlayerMetalConfiguration.h
//  BDAlphaPlayer
//
//  Created by ByteDance on 2020/11/8.
//

#import "BDAlphaPlayerDefine.h"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// BDAlphaPlayerMetalConfiguration.h
@interface BDAlphaPlayerMetalConfiguration : NSObject

// 原有属性...
@property (nonatomic, copy) NSString *directory;
@property (nonatomic, assign) CGRect renderSuperViewFrame;
@property (nonatomic, assign) BDAlphaPlayerOrientation orientation;

// 新增 config 文件名属性（默认为 "config"）
@property (nonatomic, copy) NSString *configFileName;

+ (instancetype)defaultConfiguration;

@end

NS_ASSUME_NONNULL_END
