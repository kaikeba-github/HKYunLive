//
//  HKYunLiveProtoGroupUrlSenderModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/7/2.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveProtoBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveProtoGroupUrlSenderModel : HKYunLiveProtoBaseModel
@property (nonatomic, strong)NSString *groupId;  //groupID
@property (nonatomic, strong)NSString *ext;
@property (nonatomic, strong)NSString *mobileActionUrl; //NA红包、评测地址
@property (nonatomic, strong)NSString *webActionUrl; //Web红包、评测地址
@property (nonatomic, strong)NSString *title;
@property (nonatomic, assign)NSInteger *showWay;


@end

NS_ASSUME_NONNULL_END
