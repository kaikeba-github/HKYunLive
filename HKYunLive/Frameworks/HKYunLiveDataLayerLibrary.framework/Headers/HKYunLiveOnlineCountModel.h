//
//  HKYunLiveOnlineCountModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/14.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveOnlineCountModel : HKYunBaseModel
@property (nonatomic, strong)NSString *liveId;
@property (nonatomic, strong)NSString *liveName;
@property (nonatomic, assign)NSUInteger num;

@end

NS_ASSUME_NONNULL_END
