//
//  HKYunLiveProtoCustomMsgModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/7/2.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunLiveProtoBaseModel.h"


NS_ASSUME_NONNULL_BEGIN

@class HKYunLiveIMImageInfoModel;
@interface HKYunLiveProtoCustomMsgModel : HKYunLiveProtoBaseModel

@property (nonatomic, strong)HKYunLiveIMImageInfoModel *MsgContent;//

@property (nonatomic, strong)NSString *MsgType; //

@end

NS_ASSUME_NONNULL_END
