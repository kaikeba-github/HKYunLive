//
//  HKYunLiveRedPackageListRequest.h
//  HKYunLive
//
//  Created by Duane on 2020/4/21.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import "HKYunLiveRoomBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveRedPackageListRequest : HKYunLiveRoomBaseRequest

- (instancetype)initWithLiveId:(NSString *)liveId AccountId:(NSString *)accountId;

@end

NS_ASSUME_NONNULL_END
