//
//  HKYunLiveRouteModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/11.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class HKYunLivePullStreamModel;
@interface HKYunLiveRouteModel : HKYunBaseModel
@property (nonatomic, strong)NSString *cameraTag;//机位标示
@property (nonatomic, strong)NSString *cameraName;//机位名
@property (nonatomic, strong)NSString *cameraType;//机位类型（主/从机位）
@property (nonatomic, strong)NSString *streamName;//流名字
@property (nonatomic, strong)NSString *pushUrl; //推流地址
@property (nonatomic, strong)NSArray<HKYunLivePullStreamModel *> *pullUrls; //拉流地址列表

@end

NS_ASSUME_NONNULL_END
