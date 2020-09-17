//
//  KKBSDKLiveIMQuestionListRequest.h
//  HKYunLive
//
//  Created by Duane on 2020/4/21.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import "HKYunLiveRoomBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveQuestionListRequest : HKYunLiveRoomBaseRequest

 - (instancetype)initWithLiveId:(NSString *)liveId UserId:(NSString *)uid;

@end

NS_ASSUME_NONNULL_END
