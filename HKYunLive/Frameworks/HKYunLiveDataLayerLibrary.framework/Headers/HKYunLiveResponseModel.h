//
//  HKYunLiveResponseModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/11.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveResponseModel : NSObject

@property (nonatomic, assign) NSInteger code; //请求状态码
@property (nonatomic, strong) NSString *msg; //状态描述
@property (nonatomic, strong) id data;

@property (nonatomic, strong) id result;

@end

NS_ASSUME_NONNULL_END
