//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBaseSubscriber.h"

#import "TBExtBuyContactPhonePickerDelegate-Protocol.h"

@class NSString, TBExtBuyContactPhonePicker, TBTradeInputModel, UITextField;

@interface TBExtPickPhoneSubscriber : TBExtBaseSubscriber <TBExtBuyContactPhonePickerDelegate>
{
    UITextField *_textField;	// 8 = 0x8
    TBTradeInputModel *_model;	// 16 = 0x10
    TBExtBuyContactPhonePicker *_contactsPicker;	// 24 = 0x18
}

@property(retain, nonatomic) TBExtBuyContactPhonePicker *contactsPicker; // @synthesize contactsPicker=_contactsPicker;
@property(nonatomic) __weak TBTradeInputModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)selectPhonePickerOfNumber:(id)arg1;
- (id)handleEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

