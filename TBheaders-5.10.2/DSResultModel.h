//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AlipayResultModel, NSString;

@interface DSResultModel : TBJSONModel
{
    NSString *_tradeNo;	// 8 = 0x8
    AlipayResultModel *_alipayResult;	// 16 = 0x10
}

@property(retain, nonatomic) AlipayResultModel *alipayResult; // @synthesize alipayResult=_alipayResult;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;

@end

