//
//  HKYunLiveProtoOnlineNumSwitchModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/7/2.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveProtoOnlineNumSwitchModel : HKYunBaseModel

@property (nonatomic, strong)NSString *switchStatus;   //OFF ON
@property (nonatomic, assign)NSInteger onlineNum; //switch值为Off情况下为0

@end

NS_ASSUME_NONNULL_END
