//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ClientMessageDelegate.h"
#import "MDAudioFileManagerDelegate.h"
#import "MDAudioRecorderDelegate.h"
#import "MDChatVideoDownLoadManagerDelegate.h"
#import "MDMsgFileSenderDelegate.h"
#import "MDSessionDispatcherDelegate.h"

@class NSHashTable, NSString;

@interface MDSharedListenerManager : NSObject <ClientMessageDelegate, MDAudioFileManagerDelegate, MDChatVideoDownLoadManagerDelegate, MDAudioRecorderDelegate, MDMsgFileSenderDelegate, MDSessionDispatcherDelegate>
{
    NSHashTable *_infos;
    int _lock;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)handleListenerWithSel:(SEL)arg1 Protocol:(id)arg2;
- (void)handleListenerInfo:(id)arg1 action:(SEL)arg2 Protocol:(id)arg3;
- (id)duplicateInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)doNothing;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)logAll;
- (id)tempDelegateArray;
- (void)removeListenerInfoKindOfClass:(Class)arg1;
- (void)removeListenerInfo:(id)arg1;
- (void)addListenerInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

