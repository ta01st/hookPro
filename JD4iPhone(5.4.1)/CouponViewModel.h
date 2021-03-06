//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface CouponViewModel : NSObject
{
    _Bool _applicability;
    _Bool _isLingQu;
    NSNumber *_quota;
    NSNumber *_platformType;
    NSString *_encryptedKey;
    NSNumber *_couponType;
    NSString *_name;
    NSString *_beginTime;
    NSNumber *_batchId;
    NSString *_endTime;
    NSNumber *_discount;
    NSNumber *_roleId;
    NSString *_timeDesc;
    NSNumber *_couponKind;
    NSNumber *_platform;
}

@property(retain, nonatomic) NSNumber *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSNumber *couponKind; // @synthesize couponKind=_couponKind;
@property(nonatomic) _Bool isLingQu; // @synthesize isLingQu=_isLingQu;
@property(copy, nonatomic) NSString *timeDesc; // @synthesize timeDesc=_timeDesc;
@property(retain, nonatomic) NSNumber *roleId; // @synthesize roleId=_roleId;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount=_discount;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *batchId; // @synthesize batchId=_batchId;
@property(nonatomic) _Bool applicability; // @synthesize applicability=_applicability;
@property(copy, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *couponType; // @synthesize couponType=_couponType;
@property(copy, nonatomic) NSString *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) NSNumber *platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) NSNumber *quota; // @synthesize quota=_quota;
- (void).cxx_destruct;

@end

