//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXAnimationModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;	// 8 = 0x8
}

+ (id)wx_export_method_18;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)transition:(id)arg1 args:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

