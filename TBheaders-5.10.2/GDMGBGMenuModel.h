//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface GDMGBGMenuModel : TBJSONModel
{
    _Bool _isAdded;	// 8 = 0x8
    NSString *_tag;	// 16 = 0x10
    NSString *_menu;	// 24 = 0x18
}

@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(copy, nonatomic) NSString *menu; // @synthesize menu=_menu;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

@end

