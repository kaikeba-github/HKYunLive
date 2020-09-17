//
//  HKYunLiveRedPackageModel.h
//  HKYunLive
//
//  Created by Duane on 2020/4/21.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveRedPackageExtModel : HKYunBaseModel

@property (nonatomic, strong) NSString *webUrl; // "https://baidu.com",
@property (nonatomic, strong) NSString *mobileUrl; // "https://kaikeba.com"

@end

@interface HKYunLiveRedPackageModel : HKYunBaseModel

@property (nonatomic, assign) unsigned long long activityId; // 22,
@property (nonatomic, strong) NSString *name; // "测试口令",
@property (nonatomic, strong) HKYunLiveRedPackageExtModel *ext;

@end

NS_ASSUME_NONNULL_END
