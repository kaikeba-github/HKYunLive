//
//  HKYunLiveProtoMulitPullAddressChangedModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/8/18.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveProtoBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class HKYunLiveRouteModel;
@interface HKYunLiveProtoMulitPullAddressChangedModel : HKYunLiveProtoBaseModel

@property (nonatomic, strong)NSString *timGroupId;  // IMId
@property (nonatomic, strong)NSArray <HKYunLiveRouteModel *> *routeList;

@end

NS_ASSUME_NONNULL_END
