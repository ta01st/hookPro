//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDWalletViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class MDAPICached, MDCashDeskInfo, MDWalletPasswordView, MDWalletView, NSString;

@interface MDWalletHandler : NSObject <MDWalletViewDelegate, UIAlertViewDelegate>
{
    _Bool _isPaying;
    _Bool _manualCheck;
    _Bool _inPaySign;
    _Bool _isCashingOut;
    _Bool _inCashKey;
    NSString *_data;
    CDUnknownBlockType _cashDeskBlock;
    MDWalletView *_walletView;
    long long _currentChannel;
    MDCashDeskInfo *_cashDeskInfo;
    NSString *_tradeNo;
    NSString *_cashDeskCallbackMsg;
    NSString *_cashDeskForgetPasswordGotoString;
    unsigned long long _remainingAutoRecheckTimes;
    MDAPICached *_cashDeskApiCached;
    CDUnknownBlockType _cashKeyBlock;
    MDWalletPasswordView *_walletPasswordView;
    NSString *_cashKeyCallbackMsg;
    NSString *_cashKeyForgetPasswordGotoString;
    NSString *_cashKeyFaqGotoString;
}

+ (id)sharedHandler;
@property(nonatomic) _Bool inCashKey; // @synthesize inCashKey=_inCashKey;
@property(retain, nonatomic) NSString *cashKeyFaqGotoString; // @synthesize cashKeyFaqGotoString=_cashKeyFaqGotoString;
@property(retain, nonatomic) NSString *cashKeyForgetPasswordGotoString; // @synthesize cashKeyForgetPasswordGotoString=_cashKeyForgetPasswordGotoString;
@property(retain, nonatomic) NSString *cashKeyCallbackMsg; // @synthesize cashKeyCallbackMsg=_cashKeyCallbackMsg;
@property(retain, nonatomic) MDWalletPasswordView *walletPasswordView; // @synthesize walletPasswordView=_walletPasswordView;
@property(copy, nonatomic) CDUnknownBlockType cashKeyBlock; // @synthesize cashKeyBlock=_cashKeyBlock;
@property(nonatomic) _Bool isCashingOut; // @synthesize isCashingOut=_isCashingOut;
@property(nonatomic) _Bool inPaySign; // @synthesize inPaySign=_inPaySign;
@property(retain, nonatomic) MDAPICached *cashDeskApiCached; // @synthesize cashDeskApiCached=_cashDeskApiCached;
@property(nonatomic) unsigned long long remainingAutoRecheckTimes; // @synthesize remainingAutoRecheckTimes=_remainingAutoRecheckTimes;
@property(nonatomic) _Bool manualCheck; // @synthesize manualCheck=_manualCheck;
@property(retain, nonatomic) NSString *cashDeskForgetPasswordGotoString; // @synthesize cashDeskForgetPasswordGotoString=_cashDeskForgetPasswordGotoString;
@property(retain, nonatomic) NSString *cashDeskCallbackMsg; // @synthesize cashDeskCallbackMsg=_cashDeskCallbackMsg;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) MDCashDeskInfo *cashDeskInfo; // @synthesize cashDeskInfo=_cashDeskInfo;
@property(nonatomic) long long currentChannel; // @synthesize currentChannel=_currentChannel;
@property(retain, nonatomic) MDWalletView *walletView; // @synthesize walletView=_walletView;
@property(copy, nonatomic) CDUnknownBlockType cashDeskBlock; // @synthesize cashDeskBlock=_cashDeskBlock;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) _Bool isPaying; // @synthesize isPaying=_isPaying;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearCashKey;
- (void)cashKeyCallback:(long long)arg1 msg:(id)arg2;
- (void)cashKeyCallback:(long long)arg1 msg:(id)arg2 gotoString:(id)arg3;
- (void)cashKeyError:(id)arg1;
- (void)cashKeyFail:(id)arg1;
- (void)cashKeySuccess:(id)arg1;
- (void)cashKey:(id)arg1 token:(id)arg2 fee:(id)arg3;
- (void)cashKey:(id)arg1 complation:(CDUnknownBlockType)arg2;
- (void)clearCashDesk;
- (void)cashDeskCallback:(long long)arg1 msg:(id)arg2;
- (void)cashDeskCallback:(long long)arg1 msg:(id)arg2 gotoString:(id)arg3;
- (void)changePayType;
- (void)payFailedWithHelpButtonTitle:(id)arg1;
- (void)payCheck:(id)arg1 timeout:(double)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (void)payCheck:(id)arg1;
- (void)getPaySignError:(id)arg1;
- (void)getPaySignFail:(id)arg1;
- (void)getPaySignSuccess:(id)arg1;
- (void)getPaySign:(long long)arg1 data:(id)arg2 pwd:(id)arg3;
- (void)getPayChannelError:(id)arg1;
- (void)getPayChannelFail:(id)arg1;
- (void)getPayChannelSuccess:(id)arg1;
- (void)getPayChannel:(id)arg1;
- (void)cashDesk:(id)arg1 complation:(CDUnknownBlockType)arg2;
- (void)didTouchChangePayType;
- (void)didTouchHelp;
- (void)didCloseWalletPayFailedView;
- (void)didTouchFinishPay;
- (void)didTouchFaq;
- (void)didCloseWalletPayingView;
- (void)walletView:(id)arg1 didStartPay:(long long)arg2 md5pwd:(id)arg3;
- (void)didCloseWalletView:(id)arg1;
- (void)userWillLogout:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)processPayOrderResult:(id)arg1;
- (void)processPayOrderNotification:(id)arg1;
- (void)aliPayWithSign:(id)arg1 complation:(CDUnknownBlockType)arg2;
- (void)processAuthResult:(id)arg1;
- (void)processAlipayAuthNotification:(id)arg1;
- (void)binAliPay:(id)arg1 complation:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)aliPayComplationBlock;
- (void)setAliPayComplationBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)complationBlock;
- (void)setComplationBlock:(CDUnknownBlockType)arg1;
- (_Bool)isInstallAliPay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

