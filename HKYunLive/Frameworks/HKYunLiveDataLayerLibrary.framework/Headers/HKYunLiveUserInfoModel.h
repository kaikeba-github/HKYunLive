//
//  HKYunLiveUserInfoModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/9.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveUserInfoModel : HKYunBaseModel

@property (nonatomic, strong)NSString *uid;   //lps uid
@property (nonatomic, strong)NSString *accessToken; //lps accessToken
@property (nonatomic, strong)NSString *nickName; //lps nickName

@end

NS_ASSUME_NONNULL_END
