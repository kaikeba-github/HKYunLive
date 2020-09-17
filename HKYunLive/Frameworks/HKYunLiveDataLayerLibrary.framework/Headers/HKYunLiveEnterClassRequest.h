//
//  HKYunLiveEnterClassRequest.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/11.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveEnterClassRequest : HKYunLiveBaseRequest

- (instancetype)initEnterCode:(NSString *)enterCode UserId:(NSString *)userId LiveId:(NSString *)liveId;

@end

NS_ASSUME_NONNULL_END
