//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMMtopRequest.h"

@class NSArray, NSString;

@interface GDMDiscoverCommonRequest : GDMMtopRequest
{
    int _chid;	// 8 = 0x8
    NSArray *_shareList;	// 16 = 0x10
    NSArray *_adList;	// 24 = 0x18
    NSString *_strUpdateTime;	// 32 = 0x20
}

@property(retain) NSString *strUpdateTime; // @synthesize strUpdateTime=_strUpdateTime;
@property(retain) NSArray *adList; // @synthesize adList=_adList;
@property(retain) NSArray *shareList; // @synthesize shareList=_shareList;
- (void).cxx_destruct;
- (_Bool)parserTagList:(id)arg1;
- (void)startLoadWithN:(int)arg1 withS:(int)arg2 withChid:(int)arg3 whithTag:(id)arg4 timestamp:(id)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)methodName;

@end

