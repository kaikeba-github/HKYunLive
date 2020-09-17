//
//  HKYunLiveIMImageInfoModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/30.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class HKYunLiveImageItemModel;
@interface HKYunLiveIMImageInfoModel : HKYunBaseModel

@property (nonatomic, strong)NSString *ImageFormat;   //图片格式 JPG=1, Gif=2, PNG=3, BMP=4, 其他=255
@property (nonatomic, strong)NSArray <HKYunLiveImageItemModel *> *ImageInfoArray;

- (HKYunLiveImageItemModel *)getOrgImage;   //获取原图
- (HKYunLiveImageItemModel *)getThumbImage; //获取缩率图




@end

NS_ASSUME_NONNULL_END
