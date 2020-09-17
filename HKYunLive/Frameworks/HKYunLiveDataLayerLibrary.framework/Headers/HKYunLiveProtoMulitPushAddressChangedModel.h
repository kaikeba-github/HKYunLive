//
//  HKYunLiveProtoMulitPushAddressChangedModel.h
//  HKYunLiveDataLayerLibrary
//
//  Created by zddMac on 2020/8/18.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveProtoBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class HKYunLiveRouteModel;
@interface HKYunLiveProtoMulitPushAddressChangedModel : HKYunLiveProtoBaseModel

@property (nonatomic, strong)NSString *timGroupId;  // IMId
@property (nonatomic, assign)unsigned long long teacherUid;
@property (nonatomic, strong)NSArray <HKYunLiveRouteModel *> *routeList;


@end

NS_ASSUME_NONNULL_END
