//
//  HKYunLiveRedPackageReceiveRequest.h
//  HKYunLive
//
//  Created by zddMac on 2020/4/21.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import "HKYunLiveRoomBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveRedPackageReceiveRequest : HKYunLiveRoomBaseRequest

- (instancetype)initWithLiveId:(NSString *)liveId ActivityId:(NSString *)activityId AccountId:(NSString *)accountId Nickname:(NSString *)nickName;

@end

NS_ASSUME_NONNULL_END
