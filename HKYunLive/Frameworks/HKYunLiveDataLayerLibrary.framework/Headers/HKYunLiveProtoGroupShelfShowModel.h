//
//  HKYunLiveProtoGroupShelfShowModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/7/2.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveProtoBaseModel.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, HKYunLiveProtoGroupShelfShowType) {
    HKYunLiveProtoGroupShelfShowType_None = 0, //无商品信息
    HKYunLiveProtoGroupShelfShowType_Text=1, //文字
    HKYunLiveProtoGroupShelfShowType_Pic=2, //图片
    
};

@interface HKYunLiveProtoGroupShelfShowModel : HKYunLiveProtoBaseModel

@property (nonatomic, strong)NSString *groupId;  //groupID
@property (nonatomic, strong)NSString *shelfId;
@property (nonatomic, strong)NSString *title;
@property (nonatomic, strong)NSString *mobileActionUrl; //
@property (nonatomic, strong)NSString *webActionUrl; //
@property (nonatomic, assign)NSInteger showWay;
@property (nonatomic, assign)HKYunLiveProtoGroupShelfShowType entranceStyle;
@property (nonatomic, strong)NSString *entranceContent;

@end

NS_ASSUME_NONNULL_END
