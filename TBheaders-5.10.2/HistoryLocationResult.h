//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSNumber, NSString;

@interface HistoryLocationResult : TBJSONModel
{
    NSString *_time;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_desc;	// 24 = 0x18
    NSString *_iconUrl;	// 32 = 0x20
    NSString *_targetUrl;	// 40 = 0x28
    NSNumber *_catId;	// 48 = 0x30
}

@property(retain, nonatomic) NSNumber *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

