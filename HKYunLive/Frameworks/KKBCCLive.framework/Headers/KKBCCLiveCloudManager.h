//
//  KKBCCLiveCloudManager.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/11.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBLibrary/KKBBasicMacro.h>
#import <KKBSDK/KKBSDKDataType.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBCCLiveCloudManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBCCLiveCloudManager)

- (void)liveWithContentId:(uintID)contentId WithCCUid:(NSString *)ccuid roomId:(NSString *)roomId nickName:(NSString *)nickName password:(nullable NSString *)password navigationController:(UINavigationController *)navigationController;
- (void)playbackWithContentId:(uintID)contentId WithCCUid:(NSString *)ccuid roomId:(NSString *)roomId liveId:(NSString *)liveId recordId:(NSString *)recordId nickName:(NSString *)nickName password:(nullable NSString *)password records:(NSArray<NSString *> *)records navigationController:(UINavigationController *)navigationController;

@end

NS_ASSUME_NONNULL_END
