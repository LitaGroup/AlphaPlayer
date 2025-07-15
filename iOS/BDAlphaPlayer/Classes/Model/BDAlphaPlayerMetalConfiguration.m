//
//  BDAlphaPlayerMetalConfiguration.m
//  BDAlphaPlayer
//
//  Created by ByteDance on 2020/11/8.
//

#import "BDAlphaPlayerMetalConfiguration.h"

@implementation BDAlphaPlayerMetalConfiguration

+ (instancetype)defaultConfiguration
{
    BDAlphaPlayerMetalConfiguration *configuration = [[BDAlphaPlayerMetalConfiguration alloc] init];
    configuration.directory = @"";
    configuration.orientation = BDAlphaPlayerOrientationPortrait;
    configuration.renderSuperViewFrame = CGRectZero;
    configuration.configFileName = @"config";
    return configuration;
}

@end
