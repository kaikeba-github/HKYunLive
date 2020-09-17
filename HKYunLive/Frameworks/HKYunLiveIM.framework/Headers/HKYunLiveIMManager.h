//
//  HKYunLiveIMManager.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/4.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HKYunLiveIMKitDefine.h"
#import <HKYunLiveDataLayerLibrary/HKYunLiveInfoModel.h>

NS_ASSUME_NONNULL_BEGIN
@class HKYunLiveIMInfoModel;
@class TIMConversation;
@class HKYunLiveProtoGroupEventNotifyModel;
@class HKYunLiveProtoGroupShelfHideModel;
@class HKYunLiveProtoGroupShelfShowModel;
@class HKYunLiveContentModel;
@class HKYunLiveIMModel;
@class HKYunLiveUserInfoModel;


@protocol HKYunLiveIMManagerDelegate <NSObject>

/********* 直播状态  ************/
- (void)hkyunLiveImInitFailCode:(int)code ErrorMsg:(NSString *)msg;
- (void)hkyunLiveImInitConversationFinish:(TIMConversation *)conversation;
- (void)hkyunLiveImForceLogout; //强制下线（被挤下线）
- (void)hkyunLiveImSigExpired;  //sig过期
- (void)hkyunLiveImConnectStatus:(HKYunIMConnectStatus)connectStatus; //IM连接状态

/********* 信令 *********/

//红包
- (void)hkyunLiveImActionAcitvity:(NSString *)url;
//测验
- (void)hkyunLiveImActionExam:(NSString *)url;
//点赞
- (void)hkyunLiveImActionLikeCount:(NSUInteger)likeCount newAddCount:(NSInteger)addCount;
//禁言
- (void)hkyunLiveImActionAllShutup:(BOOL)isAllShutup;
//直播间状态
- (void)hkyunLiveImActionLiveStatus:(HKYunLiveStatus)liveStatus;
//在线人数
- (void)hkyunLiveImActionOnlineCount:(NSUInteger)onlineCount;
//切换拉流地址
- (void)hkyunLiveImActionPullAddressChanged:(NSArray *)pullUrls;
//多路拉流地址切换
- (void)hkyunLiveImActionMulitPullAddressChanged:(NSArray<HKYunLiveRouteModel *> *)routeList;

//多路推流地址切换
- (void)hkyunLiveImActionMulitPushAddressChanged:(NSArray<HKYunLiveRouteModel *> *)routeList;

//通知信息 购买/领取红包等
- (void)hkyunLiveImActionGroupEventNotify:(HKYunLiveProtoGroupEventNotifyModel *)eventNotify;
//是否关闭在线人数显示
- (void)hkyunLiveImActionOnlineNumSwitch:(BOOL)isShow;
//url链接
- (void)hkyunLiveImActionUrlSender:(NSString *)url;
//显示货架
- (void)hkyunLiveImActionGroupShelfShow:(HKYunLiveProtoGroupShelfShowModel *)shelfShowModel;
//隐藏货架
- (void)hkyunLiveImActionGroupShelfHide:(HKYunLiveProtoGroupShelfHideModel *)shelfHideModel;

@end



@interface HKYunLiveIMManager : NSObject

@property (nonatomic, weak) id<HKYunLiveIMManagerDelegate> delegate;

- (instancetype)initWithContentModel:(HKYunLiveContentModel *)content;

- (void)setLiveImInfo:(HKYunLiveIMModel *)imModel UserInfo:(HKYunLiveUserInfoModel *)userInfo;

//初始化IM
- (void)initLiveIm;

//添加点赞数
- (void)addLikeCount:(NSInteger)count;

- (void)actionMsgFinished;

//获取观察者
- (NSString *)getObserver;

//重置
- (void)resetImManager;





@end

NS_ASSUME_NONNULL_END
