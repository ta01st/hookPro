//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonAddToServerLogicDelegate.h"
#import "EmoticonOperateCgiDelegate.h"
#import "MMService.h"

@class EmoticonOperateCgi, NSMutableArray, NSString;

@interface EmoticonBackupOperateMgr : MMService <EmoticonOperateCgiDelegate, EmoticonAddToServerLogicDelegate, MMService>
{
    EmoticonOperateCgi *m_deleteCgi;
    NSMutableArray *m_addLogicList;
}

@property(retain, nonatomic) NSMutableArray *m_addLogicList; // @synthesize m_addLogicList;
@property(retain, nonatomic) EmoticonOperateCgi *m_deleteCgi; // @synthesize m_deleteCgi;
- (void).cxx_destruct;
- (void)onEmoticonAddToServerFailed:(id)arg1 isOverLimit:(_Bool)arg2;
- (void)onEmoticonAddToServerOk:(id)arg1;
- (void)onEmoticonOperateFailed:(id)arg1 isDeleteMode:(_Bool)arg2 isOverLimit:(_Bool)arg3;
- (void)onEmoticonOperateOk:(id)arg1 WithNeedBackupArray:(id)arg2 isDeleteMode:(_Bool)arg3;
- (void)addBackupEmoticonToServer:(id)arg1;
- (void)deleteBackupEmoticonFromServer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

