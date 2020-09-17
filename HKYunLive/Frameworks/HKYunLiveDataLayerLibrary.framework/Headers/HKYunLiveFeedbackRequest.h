//
//  HKYunLiveFeedbackRequest.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/19.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveRoomBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveFeedbackRequest : HKYunLiveRoomBaseRequest

- (instancetype)initContent:(NSString *)content Uid:(NSString *)uid;

@end

NS_ASSUME_NONNULL_END
