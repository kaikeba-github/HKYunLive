//
//  HKYunLiveDefine.h
//  HKYunLive
//
//  Created by zddMac on 2020/4/10.
//  Copyright © 2020 zddMac. All rights reserved.
//



//#define HKYunLiveDebug


#define HKYunLiveKitResource(name) [[NSBundle mainBundle] pathForResource:@"HKYunLiveKitResource" ofType:@"bundle"] == nil ? ([[[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent: @"Frameworks/HKYunLive.framework/HKYunLiveKitResource.bundle"] stringByAppendingPathComponent:name]) : ([[[NSBundle mainBundle] pathForResource:@"HKYunLiveKitResource" ofType:@"bundle"] stringByAppendingPathComponent:name])


typedef NS_ENUM(NSUInteger, HKYunLiveType)
{
    HKYunLiveType_CCLive,
    HKYunLiveType_HKYunLive
};

typedef NS_ENUM(NSUInteger, HKYunLiveAutoConnectStatus) {
    HKYunLiveAutoConnectStatus_Unstart, //未开始重连
    HKYunLiveAutoConnectStatus_Connecting,//重连中
    HKYunLiveAutoConnectStatus_End, //重连结束
};




//加载类型
typedef NS_ENUM(NSUInteger, HKYunLiveStreamPromptViewType) {
    HKYunLiveStreamPromptViewType_Loading,  //加载
    HKYunLiveStreamPromptViewType_NetworkRetry,    //网络失败重试
    HKYunLiveStreamPromptViewType_InfoFailRetry, //流信息请求失败重试
    HKYunLiveStreamPromptViewType_StreamFailRetry, //流中断错误重试
    HKYunLiveStreamPromptViewType_StreamSuspend, //直播暂停
    
};


