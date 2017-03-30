//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "ISessionInfoExt-Protocol.h"
#import "ISessionStorageDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "WXGImportMessageNotification-Protocol.h"

@class BrandSessionCache, MMBaseSessionStorage, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BrandSessionMgr : MMService <ISessionStorageDelegate, WXGImportMessageNotification, ISessionInfoExt, MMService, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt>
{
    BrandSessionCache *m_sessionCache;
    _Bool m_isUpgradeFromOldVersion;
    MMBaseSessionStorage *m_sessionStorage;
    NSMutableDictionary *m_dictCellData;
    NSData *m_oldSessionCacheData;
}

@property(retain, nonatomic) BrandSessionCache *m_sessionCache; // @synthesize m_sessionCache;
- (void).cxx_destruct;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (id)pathForNewCache;
- (void)deleteOldVersionSessionCache;
- (void)cleanUpNoMsgSessions:(id)arg1;
- (id)importSessions;
- (void)deleteAllSessions;
- (void)deleteSessionWithSessionInfo:(id)arg1;
- (void)deleteSessionWithUserName:(id)arg1;
- (void)deleteSessionAtIndex:(long long)arg1;
- (void)updateSessionCellData:(id)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (unsigned int)sessionCount;
- (_Bool)onServiceMemoryWarning;
- (void)dealloc;
- (id)init;
- (void)onImportMessageSuccess;
- (void)rebuildSessionStorage;
- (void)onRebuildSessionStorage;
- (void)onSessionUpgrade;
- (void)addBrandSessionHolderToSessionList;
- (void)isUser:(id)arg1 hasSpecalSessionInfo:(id *)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)isMessage:(id)arg1 Handled:(_Bool *)arg2;
- (void)isUser:(id)arg1 Handled:(_Bool *)arg2;
- (id)genMainFrameSessionInfo;
- (void)clearSessionCacheNewArrival;
- (void)updateSessionCacheOnReadCountChangeWithMsgWrap:(id)arg1;
- (void)updateSessionCacheWithMsgWrap:(id)arg1 hasNewArrival:(_Bool)arg2;
- (id)lastMessageFromSessionCache;
- (void)RecordLastBrandMsgSvrIDWhenExitSessionWithBrand:(id)arg1;
- (void)RecordLastBrandMsgSvrIDWhenEnterBrandSessionHolder;
- (void)rebuildSessionCacheFromDB;
- (void)tryLoadSessionCache;
- (void)saveSessionCache;
- (id)pathForSessionCache;
- (_Bool)isSessionCacheValid;
- (void)UpdateSendStatusOfUser:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 draftTime:(unsigned int)arg3;
- (void)onGetDraft:(id)arg1 draft:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnClearReadCountForBrand:(id)arg1;
- (_Bool)isContactNeedProcess:(id)arg1;
- (unsigned int)updateOrAddSessionForUser:(id)arg1 AllowAdd:(_Bool)arg2;
- (unsigned int)genSendMsgTime;
- (void)addSession:(id)arg1;
- (unsigned int)updateSessionForUser:(id)arg1;
- (id)getLastUserName;
- (void)UntopSessionOfUser:(id)arg1;
- (void)TopSessionOfUser:(id)arg1;
- (id)GetUserNamesOnSessionList;
- (void)UpdateSessionOfUser:(id)arg1;
- (void)DeleteSessionOfUserWithoutDeleteContactOrMessage:(id)arg1;
- (void)DeleteSessionOfUser:(id)arg1;
- (void)notifyDeletedAllSession;
- (void)tryInvalidateSessionCacheForUser:(id)arg1;
- (void)ClearNewArrivalCount;
- (_Bool)HasNewArrival;
- (unsigned int)GetNewArrivalCount;
- (id)GetBrandLastMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
