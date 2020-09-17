//
//  HKYunLiveContentModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/9.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveContentModel : HKYunBaseModel

@property (nonatomic, assign)unsigned long long contentId; //lps contentId
@property (nonatomic, strong)NSString *liveName; //lps contentName
/*仅慧科云直播使用字段*/
@property (nonatomic, strong)NSString *enterCode;
@property (nonatomic, strong)NSString *liveId; //慧科云直播liveId
@property (nonatomic, strong)NSString *operId;//推流端业务使用
@property (nonatomic, assign)BOOL isConfigGoods;//手机直播货架是否显示（审核使用）


@end

NS_ASSUME_NONNULL_END
