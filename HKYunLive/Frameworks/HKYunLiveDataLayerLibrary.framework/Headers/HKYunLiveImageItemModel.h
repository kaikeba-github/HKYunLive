//
//  HKYunLiveImageItemModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/30.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HKYunLiveIMImageItemType) {
    
    HKYunLiveIMImageItemType_Org=1, //原图
    HKYunLiveIMImageItemType_Big=2,//大图
    HKYunLiveIMImageItemType_Thumb=3,//缩略图
    
};




@interface HKYunLiveImageItemModel : HKYunBaseModel
@property (nonatomic, assign)HKYunLiveIMImageItemType Type;
@property (nonatomic, assign)NSUInteger Size;
@property (nonatomic, assign)NSUInteger Width;
@property (nonatomic, assign)NSUInteger Height;
@property (nonatomic, strong)NSString *URL;

@end

NS_ASSUME_NONNULL_END
