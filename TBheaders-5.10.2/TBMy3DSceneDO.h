//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMy3DBaseBinDO.h"

@class NSString;

@interface TBMy3DSceneDO : TBMy3DBaseBinDO
{
    int _sex;	// 8 = 0x8
    unsigned long long _binSize;	// 16 = 0x10
    NSString *_modleId;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *modleId; // @synthesize modleId=_modleId;
@property(nonatomic) unsigned long long binSize; // @synthesize binSize=_binSize;
- (void).cxx_destruct;

@end

