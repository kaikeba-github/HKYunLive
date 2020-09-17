//
//  HKYunLiveInfoModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/11.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HKYunLiveStatus) {
    HKYunLiveStatus_Unknown,
    HKYunLiveStatus_UnStart,
    HKYunLiveStatus_Living,
    HKYunLiveStatus_Suspend, //直播暂停
    HKYunLiveStatus_LiveEnd,
    HKYunLiveStatus_Interrupt, //强制中断
};

@class HKYunLiveRouteModel;
@class HKYunLiveIMModel;
@interface HKYunLiveInfoModel : HKYunBaseModel
@property (nonatomic, strong)NSString *liveId; //直播id
@property (nonatomic, strong)NSString *enterCode;//
@property (nonatomic, strong)NSString *liveName; //直播名
@property (nonatomic, strong)NSString *operId;
@property (nonatomic, assign)NSInteger memberQuota; //教室容量
@property (nonatomic, assign)NSUInteger expectStartTime; //计划直播开始时间（毫秒）
@property (nonatomic, assign)NSInteger expectDurationTime; //计划直播时长
@property (nonatomic, assign)NSUInteger actualStartTime; //实际开始时间（毫秒）
@property (nonatomic, assign)NSUInteger effectiveTime;  //推流过期时间（毫秒）
@property (nonatomic, assign)HKYunLiveStatus liveStatus;// 
@property (nonatomic, strong)NSString *mediaId; //媒体id
@property (nonatomic, strong)NSString *token; //直播间token
@property (nonatomic, strong)NSArray<HKYunLiveRouteModel *> *liveRoutes; //直播线路列表
@property (nonatomic, strong)HKYunLiveIMModel *imGroupInfo;
@property (nonatomic, strong)NSString *h5Url;//h5直播观看链接
@property (nonatomic, assign)BOOL isConfigGoods;//手机直播货架是否显示（审核使用） yes-显示 

@end

NS_ASSUME_NONNULL_END
