//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HPGrowingTextViewDelegate-Protocol.h"

@class HPGrowingTextView;
@protocol TBAddressBookShareInputViewDelegate;

@interface TBAddressBookShareInputView : UIView <HPGrowingTextViewDelegate>
{
    HPGrowingTextView *_growingTextView;	// 8 = 0x8
    id <TBAddressBookShareInputViewDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <TBAddressBookShareInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HPGrowingTextView *growingTextView; // @synthesize growingTextView=_growingTextView;
- (void).cxx_destruct;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)init;

@end

