//
//  HKYunLiveStreamPromptView.h
//  HKYunLive
//
//  Created by zddMac on 2020/5/14.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HKYunLiveDefine.h"

NS_ASSUME_NONNULL_BEGIN





typedef void(^HKYunLiveStreamPromptActionBlock)(void);

@interface HKYunLiveStreamPromptView : UIView
@property (nonatomic, assign, readonly) BOOL   didShow;
@property (nonatomic, copy) HKYunLiveStreamPromptActionBlock actionBlock;
@property (nonatomic, assign, readonly)HKYunLiveStreamPromptViewType type;


- (void)changeViewWithOrientation:(UIInterfaceOrientation)orientation;
- (void)showLiveStreamPromptView:(HKYunLiveStreamPromptViewType)promptType;

@end

NS_ASSUME_NONNULL_END
