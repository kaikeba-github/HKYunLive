//
//  HKYunIMKitDefine.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/4.
//  Copyright © 2020 zddMac. All rights reserved.
//




/*------------------   Cache Path ------------------*/
#define HKYunIMKitBaseDBPath [NSHomeDirectory() stringByAppendingString:@"/Documents/com_tencent_imsdk_data/"]



/* --------------------- Notification ---------------------*/
//消息
#define HKYunIMKitNotification_TIMMessageListener          @"HKYunIMKitNotification_TIMMessageListener"

//消息撤回
#define HKYunIMKitNotification_TIMMessageRevokeListener     @"HKYunIMKitNotification_TIMMessageRevokeListener"

//消息回执
#define HKYunIMKitNotification_onRecvMessageReceipts        @"HKYunIMKitNotification_onRecvMessageReceipts"

//User
#define HKYunIMKitNotification_TIMUserStatusListener        @"HKYunIMKitNotification_TIMUserStatusListener"

//HKYunIMConnectStatus
#define HKYunIMKitNotification_TIMConnectStatusListener    @"HKYunIMKitNotification_TIMConnectStatusListener"






/**
*  HKYunIMKit网络状态枚举
*
*  HKYunIMConnectStatus_Success         连接成功
*  HKYunIMConnectStatus_Connecting      正在连接
*  HKYunIMConnectStatus_ConnectFailed   连接失败
*  HKYunIMConnectStatus_Disconnect      断开链接
*/

typedef NS_ENUM(NSUInteger, HKYunIMConnectStatus)
{
    HKYunIMConnectStatus_Success,
    HKYunIMConnectStatus_Connecting,
    HKYunIMConnectStatus_ConnectFailed,
    HKYunIMConnectStatus_Disconnect,
    
};

/**
 *  HKYunIMKit用户状态枚举
 *
 *  HKYunIMUserStatus_ForceOffline   用户被强制下线
 *  HKYunIMUserStatus_ReConnFailed   用户重连失败
 *  HKYunIMUserStatus_SigExpired     用户身份（usersig）过期
 */
typedef NS_ENUM(NSUInteger, HKYunIMUserStatus) {
    HKYunIMUserStatus_ForceOffline,
    HKYunIMUserStatus_ReConnFailed,
    HKYunIMUserStatus_SigExpired,
};


