//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextView;

@interface CommuneTextView : UIView <UITextViewDelegate>
{
    UILabel *_placeHolderLabel;
    UILabel *_numberLabel;
    UITextView *_inputView;
    id <CommuneTextViewDelegate> _tdelegate;
}

@property(nonatomic) __weak id <CommuneTextViewDelegate> tdelegate; // @synthesize tdelegate=_tdelegate;
@property(retain, nonatomic) UITextView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (int)checkContentLength;
- (double)getHeightTextContent;
- (void)resetFrameNumber;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

