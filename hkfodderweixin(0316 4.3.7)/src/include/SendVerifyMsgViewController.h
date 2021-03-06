//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CContact.h"

@interface SendVerifyMsgViewController
{
    CContact *m_oVerifyContact;	// 112 = 0x70
    UITextField *m_tfVerifyMsg;	// 120 = 0x78
//    MMTableView *m_tableView;	// 128 = 0x80
    UISwitch *m_swWCOutsider;	// 136 = 0x88
//    CContactVerifyLogic *m_oContactVerifyLogic;	// 144 = 0x90
    CContact *m_oChatContact;	// 152 = 0x98
//    CMessageWrap *m_oSourceMsg;	// 160 = 0xa0
//    id <SendVerifyMsgViewControllerDelegate> _m_delegate;	// 168 = 0xa8
}

//@property(nonatomic) __weak id <SendVerifyMsgViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
//@property(retain, nonatomic) CMessageWrap *m_oSourceMsg; // @synthesize m_oSourceMsg;
@property(retain, nonatomic) CContact *m_oChatContact; // @synthesize m_oChatContact;
@property(retain, nonatomic) CContact *m_oVerifyContact; // @synthesize m_oVerifyContact;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)onContactVerifyFail;
- (void)onSendVerifyMsg;
- (void)onHideKeyBoard;
- (void)onReturn;
- (void)onCancel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

