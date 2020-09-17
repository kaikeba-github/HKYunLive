//
//  HKYunLiveIMRoleModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/5.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HKYunLiveIMRoleType) {
    
    HKYunLiveIMRoleType_Teacher=1, //老师
    HKYunLiveIMRoleType_Assistant=2,//助教
    HKYunLiveIMRoleType_ClassTeacher=3,//班主任
    HKYunLiveIMRoleType_Admin=4,//管理员
    
};

@interface HKYunLiveIMRoleModel : HKYunBaseModel
@property (nonatomic, assign)unsigned long long uid;
@property (nonatomic, assign)HKYunLiveIMRoleType roleType;


@end

NS_ASSUME_NONNULL_END
