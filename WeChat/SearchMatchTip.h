//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SearchMatchTip : NSObject
{
    NSString *_key;
    NSString *_searchText;
    NSString *_showPrefix;
    NSString *_showSuffix;
    NSString *_showResult;
    unsigned long long _location;
    unsigned int _createTime;
    int _matchType;
    int _matchSubType;
    NSMutableArray *_arrKeywordMatchText;
    NSString *_displayNameFullPY;
    _Bool _isSilent;
}

@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
@property(retain, nonatomic) NSString *displayNameFullPY; // @synthesize displayNameFullPY=_displayNameFullPY;
@property(retain, nonatomic) NSMutableArray *arrKeywordMatchText; // @synthesize arrKeywordMatchText=_arrKeywordMatchText;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(nonatomic) int matchSubType; // @synthesize matchSubType=_matchSubType;
@property(nonatomic) int matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSString *showSuffix; // @synthesize showSuffix=_showSuffix;
@property(retain, nonatomic) NSString *showPrefix; // @synthesize showPrefix=_showPrefix;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isStrongMatch;
- (long long)comparePhoneSearchMatchTipSecondLineAscending:(id)arg1;
- (long long)comparePhoneSearchMatchTipFirstLineAscending:(id)arg1;
- (long long)compareGroupSearchMatchTipAscendingUseBasicLogic:(id)arg1;
- (long long)compareGroupSearchMatchTipAscendingUseOptimizedLogic:(id)arg1;
- (_Bool)groupActiveLogic:(unsigned int)arg1;
- (long long)compareGroupSearchMatchTipAscending:(id)arg1;
- (long long)compareSearchMatchTipSecondLineAscending:(id)arg1;
- (long long)compareSearchMatchTipFirstLineAscending:(id)arg1;
- (id)getShowResult;
- (unsigned int)convertLogType;
- (id)init;

@end

