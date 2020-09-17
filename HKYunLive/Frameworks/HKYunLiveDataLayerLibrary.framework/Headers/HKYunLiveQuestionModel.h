//
//  HKYunLiveQuestionModel.h
//  HKYunLive
//
//  Created by Duane on 2020/4/21.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import "HKYunBaseModel.h"
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HKYunLiveQuestionType) {
    HKYunLiveQuestionType_Single = 1, // 单选
    HKYunLiveQuestionType_Multiple = 2, // 多选题
    HKYunLiveQuestionType_Unsteady = 3, // 不定选
    HKYunLiveQuestionType_Judgement = 4, // 判断题
};

@interface HKYunLiveQuestionModel : HKYunBaseModel

@property (nonatomic, strong) NSString *questionId; // 0,
@property (nonatomic, strong) NSString *title; // "图片选择混排",
@property (nonatomic, strong) NSString *desc; // "<p>图片选择混排<img src=\"/q_img/4390/e4b78d48f80e44ea8951b1c0f2e41504.png\"><img src=\"/q_img/4390/276c9cfac7b844bea79362a2cacbc686.png\"></p>",
@property (nonatomic, assign) HKYunLiveQuestionType type; // 2,
@property (nonatomic, strong) NSString *mobileLiveQuestionUrl; // "https://test-school-exam.kaikeba.com/im/m/question?eid=5MyLMBBMY1epyjlllCCaSg&qid=8qS5OuFTQKfdqVWEWKb2BA",
@property (nonatomic, assign) BOOL answerQuestion; // false,
@property (nonatomic, strong) NSString *pcliveQuestionUrl; // "https://test-school-exam.kaikeba.com/im/pc/question?eid=5MyLMBBMY1epyjlllCCaSg&qid=8qS5OuFTQKfdqVWEWKb2BA"

@end

NS_ASSUME_NONNULL_END
