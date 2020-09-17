//
//  HKYunLiveProtocalModel.h
//  HKYunLive
//
//  Created by zddMac on 2020/7/2.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import "HKYunBaseModel.h"

/* 系统群消息下发(历史消息不存在) */

//在线人数显示切换
#define HKYLiveProtoName_OnlineNumSwitch                     @"ONLINE_NUM_SWITCH"
//禁言
#define HKYLiveProtoName_GroupSilence                        @"GROUP_SILENCE"
//点赞
#define HKYLiveProtoName_GroupLikeNum                        @"GROUP_LIKE_NUM"
//直播状态
#define HKYLiveProtoName_LiveStatusChanged                  @"LIVE_STATUS_CHANGED"
//心跳
#define HKYLiveProtoName_OnlineNum                          @"ONLINE_NUM"
//直播拉流地址切换
#define HKYLiveProtoName_PullAddressChanged                 @"PULL_ADDRESS_CHANGED"
//单/多机位拉流直播地址切换
#define HKYLiveProtoName_MulitPullAddressChanged            @"MULIT_PULL_ADDRESS_CHANGED"

//单/多机位推流直播地址切换
#define HKYLiveProtoName_MulitPushAddressChanged            @"MULTI_PUSH_ADDRESS_CHANGED"


//显示货架协议
#define HKYLiveProtoName_GroupShelfShow                     @"GROUP_SHELF_SHOW"
//隐藏货架协议
#define HKYLiveProtoName_GroupShelfHide                     @"GROUP_SHELF_HIDE"
//群事件通知协议
#define HKYLiveProtoName_GroupEventNotify                    @"GROUP_EVENT_NOTIFY"


/* 群消息(历史消息存在) */
//评测
#define HKYLiveProtoName_TopicAsk                            @"TOPIC_ASK"
//群自定义消息
#define HKYLiveProtoName_CustomMsg                           @"CUSTOM_MSG"
//群发活动连接
#define HKYLiveProtoName_GroupUrlSender                     @"GROUP_URL_SENDER"

/*个人自定义消息*/
//红包
#define HKYLiveProtoName_KeywordsWinner                      @"KEYWORDS_WINNER"







 
NS_ASSUME_NONNULL_BEGIN

@interface HKYunLiveProtocalModel : HKYunBaseModel

@property (nonatomic, strong)NSString *protoName;  //协议名称
@property (nonatomic, strong)NSString *ver; //协议版本
@property (nonatomic, strong)NSString *contentClass;    //内容class名字
@property (nonatomic, strong)id content;                //

@end

NS_ASSUME_NONNULL_END
