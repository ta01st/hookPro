//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class NSString, TBSDKMTOPServer;

@interface PirateMtopRequest : NSObject <TBSDKServerDelegate>
{
    CDUnknownBlockType _callback;	// 8 = 0x8
    TBSDKMTOPServer *_request;	// 16 = 0x10
}

@property(retain, nonatomic) TBSDKMTOPServer *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)parseData:(id)arg1;
- (id)parseJsonData:(id)arg1;
- (void)dataRequestFailed:(id)arg1;
- (void)dataRequestFinished:(id)arg1;
- (id)sycRequestWithApi:(id)arg1 params:(id)arg2;
- (void)requestWithApi:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

