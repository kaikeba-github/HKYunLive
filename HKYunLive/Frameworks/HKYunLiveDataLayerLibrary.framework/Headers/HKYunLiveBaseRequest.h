//
//  HKYunLiveBaseRequest.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/11.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <YTKNetwork/YTKNetwork.h>
#import "HKYunLiveResponseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HKYunLiveRequestStatus) {
    HKYunLiveRequestStatus_Success = 200, // 请求成功
    HKYunLiveRequestStatus_InvalidArgument = 400, //无效参数、解析请求体失败
    HKYunLiveRequestStatus_AccessDenied = 403, // 访问被拒绝
    HKYunLiveRequestStatus_NoSuchResource = 404, // 指定资源不存在
    HKYunLiveRequestStatus_NoSupportOperation = 405, // 不支持此操作
    HKYunLiveRequestStatus_AlreadyExist = 460, // 资源已存在
    HKYunLiveRequestStatus_InternalError = 500, //内部信息错误
};


@class HKYunLiveBaseRequest;

typedef void(^HKYunLiveBaseRequestBlock)(__kindof HKYunLiveBaseRequest *request);


@interface HKYunLiveBaseRequest : YTKRequest

@property (nonatomic, strong) NSDictionary *params;

@property (nonatomic, strong, readonly) HKYunLiveResponseModel *responseModel;

@property (nonatomic, strong, readonly) NSString *errorMessage;
@property (nonatomic, assign, readonly) BOOL success;

@property (nonatomic, assign) BOOL mockEnable;
@property (nonatomic, readonly) NSString *mockPath;

- (void)startWithSuccess:(HKYunLiveBaseRequestBlock)success failure:(HKYunLiveBaseRequestBlock)failure;
- (void)startWithCompletionBlockWithSuccess:(nullable YTKRequestCompletionBlock)success failure:(nullable YTKRequestCompletionBlock)failure __attribute__((unavailable("call startWithSuccess:failure: instead")));

- (id)processResult:(id)resultData;

@end

@interface NSError (HKYunLiveRequestMessage)

- (NSString *)requestErrorMessage;


@end

NS_ASSUME_NONNULL_END
