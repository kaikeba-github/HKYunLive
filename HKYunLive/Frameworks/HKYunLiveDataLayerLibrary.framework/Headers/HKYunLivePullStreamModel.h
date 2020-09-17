//
//  HKYunLivePullStreamModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/11.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLivePullStreamModel : HKYunBaseModel
@property (nonatomic, strong)NSString *protocol; //拉流协议 rtmp、flv、hls
@property (nonatomic, strong)NSString *resolution; //清晰度 org-原始 lsd-超清  lhd-高清  lud-清晰
@property (nonatomic, strong)NSString *resolutionName;
@property (nonatomic, strong)NSString *url; //直播地址

- (NSString *)resolutionDes;
@end

NS_ASSUME_NONNULL_END
