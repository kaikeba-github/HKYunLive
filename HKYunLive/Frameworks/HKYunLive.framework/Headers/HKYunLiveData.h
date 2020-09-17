//
//  HKYunLiveData.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/8.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HKYunLiveDefine.h"


NS_ASSUME_NONNULL_BEGIN

@protocol HKYunLiveDataDelegate <NSObject>
- (void)enterRoomSuccess:(BOOL)success ErrorMsg:(NSString *)errMsg;
- (void)refreshLiveRoomInfoSuccess:(BOOL)success ErrorMsg:(NSString *)errMsg;
- (void)switchPullUrlSuccess;

@end

@class HKYunLivePullStreamModel;
@class HKYunLiveIMModel;
@class HKYunLiveRouteModel;

@interface HKYunLiveData : NSObject

@property(nonatomic, weak)id<HKYunLiveDataDelegate> delegate;

- (void)initEnterCode:(NSString *)enterCode UserId:(NSString *)userId LiveId:(NSString *)liveId;

- (void)enterLiveRoom;
- (void)refreshLiveRoomInfo;

//获取直播间人数
- (void)requestLiveRoomOnlineCount:(void(^)(BOOL success, NSUInteger count))completeBlock;

#pragma mark ---
#pragma mark 直播间数据获取
//获取当前的播放地址
- (NSString *)getCurDefinitionUrl;
//获取当前播放的清晰度
- (HKYunLivePullStreamModel *)getLiveDefinition;
//设置播放清晰度
- (void)setLiveSelectedDefinition:(HKYunLivePullStreamModel *)definitionModel;

//获取当前的清晰度列表
- (NSArray<HKYunLivePullStreamModel *> *)getLiveDefinitionList;
//获取当前直播间状态
- (HKYunLiveStatus)getLiveRoomStatus;

//获取IM信息
- (HKYunLiveIMModel *)getLiveImInfo;

- (NSString *)getUserId;
- (NSString *)getLiveToken;

- (void)setLiveRoomStatus:(HKYunLiveStatus)status;

//进入教室失败
- (BOOL)isEnterRoomSuccess;

//切换线路
- (void)changeLivePullAddress:(NSArray *)pullUrls;
//多线路切换
- (void)changeMulitLivePullAddress:(NSArray<HKYunLiveRouteModel *> *)routeList;




@end

NS_ASSUME_NONNULL_END
