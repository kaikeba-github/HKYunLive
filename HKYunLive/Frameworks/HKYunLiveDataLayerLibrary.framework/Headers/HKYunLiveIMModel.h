//
//  HKYunLiveIMModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/8.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class HKYunLiveIMRoleModel;
@interface HKYunLiveIMModel : HKYunBaseModel
@property (nonatomic, assign) NSInteger imGroupId;
@property (nonatomic, strong) NSString *sig; //IM登录sig
@property (nonatomic, strong) NSString *timGroupId;   //腾讯im群id
@property (nonatomic, strong) NSArray<HKYunLiveIMRoleModel *> *roleList;  //角色列表


@end

NS_ASSUME_NONNULL_END
