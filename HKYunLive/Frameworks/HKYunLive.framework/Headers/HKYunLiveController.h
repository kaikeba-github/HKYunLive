//
//  HKYunLiveController.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/8.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveBaseController.h"

NS_ASSUME_NONNULL_BEGIN

#if TARGET_IPHONE_SIMULATOR

#elif TARGET_OS_IPHONE

@class HKYunLivePullStreamModel;
@class HKYunLiveContentModel;
@class HKYunLiveUserInfoModel;
@interface HKYunLiveController : HKYunLiveBaseController

- (instancetype)initWithLiveContentModel:(HKYunLiveContentModel *)liveContentModel UserInfo:(HKYunLiveUserInfoModel *)liveUserModel;

- (void)refreshLiveRoomStream;
- (HKYunLivePullStreamModel *)getLiveCurDefinition;
- (NSArray<HKYunLivePullStreamModel *> *)getLiveDefinitionList;
@end

#endif

NS_ASSUME_NONNULL_END
