//
//  HKYunLiveAccountManager.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/17.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveAccountManager : NSObject

@property (nonatomic, strong, readonly)NSString *liveToken;

+ (instancetype)sharedInstance;

- (void)setLiveToken:(NSString *)liveToken;

- (void)resetLiveAccountManager;

@end

NS_ASSUME_NONNULL_END
