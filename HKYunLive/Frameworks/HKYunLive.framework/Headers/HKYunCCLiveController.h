//
//  HKYunCCLiveController.h
//  HKYunLive
//
//  Created by zddMac on 2020/4/8.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveBaseController.h"

NS_ASSUME_NONNULL_BEGIN

#if TARGET_IPHONE_SIMULATOR

#elif TARGET_OS_IPHONE

@class PlayParameter;
@class KKBContentModel;
@class KKBUserInfoModel;
@interface HKYunCCLiveController : HKYunLiveBaseController

- (instancetype)initWithContent:(KKBContentModel *)contentModel UserInfo:(KKBUserInfoModel *)userInfo AccessToken:(NSString *)token;

@end

#endif

NS_ASSUME_NONNULL_END
