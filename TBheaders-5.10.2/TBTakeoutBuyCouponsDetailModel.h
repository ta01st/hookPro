//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutBuyCouponsDetailModel : TBJSONModel
{
    _Bool _enable;	// 8 = 0x8
    _Bool _used;	// 9 = 0x9
    NSString *_title;	// 16 = 0x10
    NSString *_condition;	// 24 = 0x18
    NSString *_expires;	// 32 = 0x20
    NSString *_couponsId;	// 40 = 0x28
    NSString *_elemeId;	// 48 = 0x30
    NSString *_amount;	// 56 = 0x38
    NSString *_availableFee;	// 64 = 0x40
    NSString *_type;	// 72 = 0x48
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *availableFee; // @synthesize availableFee=_availableFee;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *elemeId; // @synthesize elemeId=_elemeId;
@property(retain, nonatomic) NSString *couponsId; // @synthesize couponsId=_couponsId;
@property(nonatomic) _Bool used; // @synthesize used=_used;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) NSString *expires; // @synthesize expires=_expires;
@property(retain, nonatomic) NSString *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
