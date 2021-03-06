//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateComponent.h"

@class NSMutableArray, NSString;

@interface TBRateAuctionComponent : TBRateComponent
{
    _Bool _upPicAllowed;	// 8 = 0x8
    NSString *_auctionId;	// 16 = 0x10
    NSString *_catId;	// 24 = 0x18
    NSString *_orderId;	// 32 = 0x20
    NSString *_pic;	// 40 = 0x28
    NSString *_sku;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_price;	// 64 = 0x40
    NSMutableArray *_uploadPhotos;	// 72 = 0x48
    long long _tagIndex;	// 80 = 0x50
    NSString *_feedbackText;	// 88 = 0x58
}

@property(retain, nonatomic) NSString *feedbackText; // @synthesize feedbackText=_feedbackText;
@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
@property(retain, nonatomic) NSMutableArray *uploadPhotos; // @synthesize uploadPhotos=_uploadPhotos;
@property(nonatomic) _Bool upPicAllowed; // @synthesize upPicAllowed=_upPicAllowed;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *auctionId; // @synthesize auctionId=_auctionId;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

