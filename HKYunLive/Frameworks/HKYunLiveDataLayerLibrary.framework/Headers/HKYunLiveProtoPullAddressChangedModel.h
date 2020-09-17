//
//  HKYunLiveProtoPullAddressChangedModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/7/2.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveProtoBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveProtoPullAddressChangedModel : HKYunLiveProtoBaseModel
/******** 拉流地址切换 ********/
@property (nonatomic, strong)NSArray *pullUrls; //拉流地址

@end

NS_ASSUME_NONNULL_END
