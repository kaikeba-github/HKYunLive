//
//  HKYunLiveUtility.h
//  HKYunLive
//
//  Created by zddMac on 2020/6/5.
//  Copyright © 2020 zddMac. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^HKYunLiveAsyncImageComplete)(NSString *path, UIImage *image);

@interface HKYunLiveUtility : NSObject

+(NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
+(NSDictionary *)dictionaryWithJsonData:(NSData *)jsonData;

+ (void)asyncDecodeImage:(NSString *)path complete:(HKYunLiveAsyncImageComplete)complete;


@end

NS_ASSUME_NONNULL_END
