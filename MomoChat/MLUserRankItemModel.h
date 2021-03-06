//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSArray, NSString;

@interface MLUserRankItemModel : EtaModel
{
    float _distance;
    int _trend;
    NSString *_momoid;
    long long _score;
    NSString *_avatarImageGUID;
    long long _rankPosition;
    NSString *_nickname;
    NSString *_sex;
    long long _age;
    long long _fortuneLevel;
    long long _charmLevel;
    NSArray *_labels;
    NSString *_livingMsg;
    NSString *_detailDescript;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(copy, nonatomic) NSString *detailDescript; // @synthesize detailDescript=_detailDescript;
@property(copy, nonatomic) NSString *livingMsg; // @synthesize livingMsg=_livingMsg;
@property(nonatomic) int trend; // @synthesize trend=_trend;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) long long charmLevel; // @synthesize charmLevel=_charmLevel;
@property(nonatomic) long long fortuneLevel; // @synthesize fortuneLevel=_fortuneLevel;
@property(nonatomic) long long age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long rankPosition; // @synthesize rankPosition=_rankPosition;
@property(copy, nonatomic) NSString *avatarImageGUID; // @synthesize avatarImageGUID=_avatarImageGUID;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
- (void).cxx_destruct;

@end

