//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSString, UIColor;

@interface MDFeedTopic : EtaModel
{
    _Bool _ft_isHot;
    _Bool _ft_isTop;
    NSString *_ft_topicid;
    NSString *_ft_title;
    NSString *_ft_gotoStr;
    NSString *_ft_icon;
    NSString *_ft_colorStr;
    long long _ft_count;
    UIColor *_titleColor;
}

+ (id)feedTopicToDictionary:(id)arg1;
+ (id)dictionaryToFeedTopic:(id)arg1;
+ (id)eta_jsonKeyPathsByProperty;
@property(nonatomic) _Bool ft_isTop; // @synthesize ft_isTop=_ft_isTop;
@property(nonatomic) _Bool ft_isHot; // @synthesize ft_isHot=_ft_isHot;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) long long ft_count; // @synthesize ft_count=_ft_count;
@property(retain, nonatomic) NSString *ft_colorStr; // @synthesize ft_colorStr=_ft_colorStr;
@property(retain, nonatomic) NSString *ft_icon; // @synthesize ft_icon=_ft_icon;
@property(retain, nonatomic) NSString *ft_gotoStr; // @synthesize ft_gotoStr=_ft_gotoStr;
@property(retain, nonatomic) NSString *ft_title; // @synthesize ft_title=_ft_title;
@property(retain, nonatomic) NSString *ft_topicid; // @synthesize ft_topicid=_ft_topicid;
- (void).cxx_destruct;
- (id)init;

@end
