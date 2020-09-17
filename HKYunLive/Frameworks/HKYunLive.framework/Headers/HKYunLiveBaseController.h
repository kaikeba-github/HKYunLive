//
//  HKYunLiveBaseController.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/9.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HKYunLiveDefine.h"
#import <KKBLibrary/KKBLibrary.h>
#import "HKYunLiveStreamPromptView.h"
#import <HKYunLiveDataLayerLibrary/HKYunLiveInfoModel.h>


NS_ASSUME_NONNULL_BEGIN

@class HKYunLivePlayerContainer;
@class HKYunLiveContentModel;
@class HKYunLiveUserInfoModel;
@class HKYunLiveIMModel;
@interface HKYunLiveBaseController : UIViewController

@property (nonatomic, strong, readonly)HKYunLivePlayerContainer *playerContainer;
@property (nonatomic, assign, readonly)UIInterfaceOrientation viewOrientation;
@property (nonatomic, assign, readonly)HKYunLiveStatus liveStatus;
@property (nonatomic, strong, readonly)HKYunLiveUserInfoModel *userInfo;
@property (nonatomic, strong, readonly)HKYunLiveContentModel *contentModel;

- (instancetype)initWithLiveType:(HKYunLiveType)liveType LiveContentModel:(HKYunLiveContentModel *)liveContentModel UserInfo:(HKYunLiveUserInfoModel *)liveUserModel;

- (void)initLiveIm:(HKYunLiveIMModel *)imModel;

- (void)initNetworkTools;
- (void)startNetworkNotification;
- (void)resetNetworkTools;
- (NetworkStatus)getCurrentNetworkStatus;

- (void)showLiveStreamPromptViewType:(HKYunLiveStreamPromptViewType)promptType;
- (void)hideLiveStreamPromptView;

- (void)setAudioSession;
- (void)resetAudioSession;

- (void)setBottomBarDefinitionTitle:(NSString *)definitionTitle;

- (void)playStatus:(HKYunLiveStatus)status;

- (void)setStudentCount:(NSInteger)count;

- (void)changeViewWithOrientation:(UIInterfaceOrientation)orientation;

- (void)startLiveTimer;
- (void)stopLiveTimer;
- (void)setLiveSeconds:(NSInteger)liveSeconds;

- (void)resetHKYunLive;




@end

NS_ASSUME_NONNULL_END
