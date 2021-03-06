//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDChatMoodBaseView.h"

#import "MDEraseAnimaitonDelegate.h"

@class MDEraseView, NSString, UIImageView;

@interface MDChatMoodCryptolaliaView : MDChatMoodBaseView <MDEraseAnimaitonDelegate>
{
    UIImageView *_bubbleView;
    MDEraseView *_eraseView;
    UIImageView *_eraseMaskView;
    UIImageView *_eraseBottomView;
}

@property(retain, nonatomic) UIImageView *eraseBottomView; // @synthesize eraseBottomView=_eraseBottomView;
@property(retain, nonatomic) UIImageView *eraseMaskView; // @synthesize eraseMaskView=_eraseMaskView;
@property(retain, nonatomic) MDEraseView *eraseView; // @synthesize eraseView=_eraseView;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animateToHiddenMask:(CDUnknownBlockType)arg1;
- (void)animateToShowMask:(CDUnknownBlockType)arg1;
- (void)addZoomoutAnimation;
- (void)displayInAnimatedState;
- (void)displayInReadyState;
- (void)stopAnimation;
- (void)endAnimation;
- (void)startAnimation;
- (void)startAnimationDelay;
- (void)setupEraseView:(id)arg1;
- (Class)chatLayoutClass;
- (id)initWithFrame:(struct CGRect)arg1 msg:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

