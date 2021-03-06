//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMGroupServiceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HUDActivityView, NSMutableArray, NSMutableDictionary, NSString, NSTimer, TBIMGroupTitleView, TBModelStatusHandler, TBMoreDataTableViewCell, UIButton, UITableView;
@protocol TBIMGroupAdapter, TBIMGroupServiceAdapter;

@interface TBChatRoomMembersViewController : TBViewController <UITableViewDelegate, UITableViewDataSource, TBIMGroupServiceDelegate>
{
    _Bool _edited;	// 10 = 0xa
    _Bool _editedAnimationing;	// 11 = 0xb
    _Bool _editedAnimationDidStopToReloadData;	// 12 = 0xc
    _Bool _currenLoadGroupUserTimeOut;	// 13 = 0xd
    _Bool _currenLoadingGroupUser;	// 14 = 0xe
    TBIMGroupTitleView *_titleView;	// 16 = 0x10
    UITableView *_chatRoomMembersTableView;	// 24 = 0x18
    UIButton *_deleteChatRoomMembersButton;	// 32 = 0x20
    HUDActivityView *_hudActivityView;	// 40 = 0x28
    NSString *_groupId;	// 48 = 0x30
    id <TBIMGroupAdapter> _groupInfo;	// 56 = 0x38
    id <TBIMGroupServiceAdapter> _groupService;	// 64 = 0x40
    NSMutableArray *_groupUserIdList;	// 72 = 0x48
    NSMutableDictionary *_groupUserListMap;	// 80 = 0x50
    NSMutableArray *_currentRequestUserIdList;	// 88 = 0x58
    unsigned long long _lastRequestUserIdLocation;	// 96 = 0x60
    unsigned long long _lastRequestUserIdCount;	// 104 = 0x68
    NSMutableArray *_groupUserList;	// 112 = 0x70
    NSMutableArray *_currentDeletedUserList;	// 120 = 0x78
    NSTimer *_loadingTimer;	// 128 = 0x80
    TBMoreDataTableViewCell *_receivedMoreDataTableViewCell;	// 136 = 0x88
    TBModelStatusHandler *_statusHandler;	// 144 = 0x90
}

@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) TBMoreDataTableViewCell *receivedMoreDataTableViewCell; // @synthesize receivedMoreDataTableViewCell=_receivedMoreDataTableViewCell;
@property(nonatomic, getter=isCurrenLoadingGroupUser) _Bool currenLoadingGroupUser; // @synthesize currenLoadingGroupUser=_currenLoadingGroupUser;
@property(nonatomic, getter=isCurrenLoadGroupUserTimeOut) _Bool currenLoadGroupUserTimeOut; // @synthesize currenLoadGroupUserTimeOut=_currenLoadGroupUserTimeOut;
@property(retain, nonatomic) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(retain, nonatomic) NSMutableArray *currentDeletedUserList; // @synthesize currentDeletedUserList=_currentDeletedUserList;
@property(retain, nonatomic) NSMutableArray *groupUserList; // @synthesize groupUserList=_groupUserList;
@property(nonatomic) unsigned long long lastRequestUserIdCount; // @synthesize lastRequestUserIdCount=_lastRequestUserIdCount;
@property(nonatomic) unsigned long long lastRequestUserIdLocation; // @synthesize lastRequestUserIdLocation=_lastRequestUserIdLocation;
@property(retain, nonatomic) NSMutableArray *currentRequestUserIdList; // @synthesize currentRequestUserIdList=_currentRequestUserIdList;
@property(retain, nonatomic) NSMutableDictionary *groupUserListMap; // @synthesize groupUserListMap=_groupUserListMap;
@property(retain, nonatomic) NSMutableArray *groupUserIdList; // @synthesize groupUserIdList=_groupUserIdList;
@property(nonatomic, getter=isEditedAnimationDidStopToReloadData) _Bool editedAnimationDidStopToReloadData; // @synthesize editedAnimationDidStopToReloadData=_editedAnimationDidStopToReloadData;
@property(nonatomic, getter=isEditedAnimationing) _Bool editedAnimationing; // @synthesize editedAnimationing=_editedAnimationing;
@property(nonatomic, getter=isEdited) _Bool edited; // @synthesize edited=_edited;
@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupService; // @synthesize groupService=_groupService;
@property(retain, nonatomic) id <TBIMGroupAdapter> groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) HUDActivityView *hudActivityView; // @synthesize hudActivityView=_hudActivityView;
@property(retain, nonatomic) UIButton *deleteChatRoomMembersButton; // @synthesize deleteChatRoomMembersButton=_deleteChatRoomMembersButton;
@property(retain, nonatomic) UITableView *chatRoomMembersTableView; // @synthesize chatRoomMembersTableView=_chatRoomMembersTableView;
@property(retain, nonatomic) TBIMGroupTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (id)initWithGroupId:(id)arg1;
- (SEL)selectorForError:(id)arg1;
- (void)groupUserDeleteFailed:(id)arg1;
- (void)groupUserDeleteSuccess:(id)arg1;
- (void)groupUserUpdatedFailed:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)hasMore;
- (_Bool)isReceivedMoreCellWithIndexPath:(id)arg1;
- (void)resetRequestState;
- (void)loadingTimeOut:(id)arg1;
- (void)stopLoadGroupUser;
- (void)startLoadGroupUser;
- (void)reloadCurrentUserData;
- (void)loadGroupUserWithAllGroupUserIdList:(id)arg1;
- (void)handleGroupUserDeleteFailedWithUserList:(id)arg1;
- (void)handleGroupUserDeleteSuccessWithUserList:(id)arg1;
- (void)handleGroupUserUpdatedFailed:(id)arg1;
- (void)handleGroupUserUpdatedSuccess:(id)arg1;
- (void)deleteChatRoomMembersButtonTap:(id)arg1;
- (void)eidtedStateChange:(_Bool)arg1;
- (void)modifyChatRoomMembersTableViewContentInset:(struct UIEdgeInsets)arg1;
- (void)animationDeleteChatRoomMembersButtonWithEdited:(_Bool)arg1;
- (void)finishDeleteMembers:(id)arg1;
- (void)deleteMembers:(id)arg1;
- (void)reloadNavigationBarWithEdited:(_Bool)arg1;
- (void)checkStateChangeWithChatRoomMembersTableViewCellModel:(id)arg1;
- (_Bool)compareUserIdList:(id)arg1 withOtherUserIdList:(id)arg2;
- (_Bool)compareUserIdList:(id)arg1 withOtherUserList:(id)arg2;
- (_Bool)compareUserList:(id)arg1 withOtherUserList:(id)arg2;
- (void)initStatusHandler;
- (void)initHUDActivityView;
- (void)initDeleteChatRoomMembersButton;
- (void)initMoreDataTableViewCell;
- (void)initChatRoomMembersTableView;
- (void)initNavigationBar;
- (void)initChatRoomMembersInfoData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

