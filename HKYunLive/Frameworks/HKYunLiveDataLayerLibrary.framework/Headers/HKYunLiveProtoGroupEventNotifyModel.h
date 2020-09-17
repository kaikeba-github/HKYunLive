//
//  HKYunLiveProtoGroupEventNotifyModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/7/2.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveProtoBaseModel.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, HKYunLiveGroupEventNotifyType) {
    
    HKYunLiveGroupEventNotifyType_RedPacket=1, //红包
    HKYunLiveGroupEventNotifyType_Purchase=2, //购买
    
};

typedef NS_ENUM(NSUInteger, HKYunLiveGroupEventNotifyPosition) {
    
    HKYunLiveGroupEventNotifyPosition_ImMessage=1, //IM聊天区
    HKYunLiveGroupEventNotifyPosition_Barrage=2, //弹幕
    HKYunLiveGroupEventNotifyPosition_BothImAndBarrage=3, //IM聊天和弹幕
    
    
};

@interface HKYunLiveProtoGroupEventNotifyModel : HKYunLiveProtoBaseModel

@property (nonatomic, strong)NSString *timGroupId;  // IMId
@property (nonatomic, assign)HKYunLiveGroupEventNotifyType eventType;  //事件类型:1.领取红包事件， 2.为购买事件  模版{nickname}购买了{name}  {nickname}领取了红包{name}
@property (nonatomic, assign)HKYunLiveGroupEventNotifyPosition showPosition; //显示位置
@property (nonatomic, assign)NSInteger showStyle;      //显示样式


@property (nonatomic, strong)NSString *nickname;
@property (nonatomic, strong)NSString *templateMsg;
@property (nonatomic, strong)NSString *name;



@end

NS_ASSUME_NONNULL_END
