//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBVRIconFontControl, TBVRPromptWidget, TBVRSightView, TBVRVideoUILabel, UILabel;
@protocol TBVRVideoPlayerViewDelegate;

@interface TBVRVideoPlayerView : UIView
{
    _Bool _singleScreen;	// 8 = 0x8
    id <TBVRVideoPlayerViewDelegate> _delegate;	// 16 = 0x10
    long long _currentScreenModel;	// 24 = 0x18
    long long _playerViewStyle;	// 32 = 0x20
    TBVRIconFontControl *_backControl;	// 40 = 0x28
    UIView *_splitView;	// 48 = 0x30
    UIView *_switchView;	// 56 = 0x38
    UILabel *_switchIconFont;	// 64 = 0x40
    UILabel *_switchLabel;	// 72 = 0x48
    TBVRPromptWidget *_leftPromptWidget;	// 80 = 0x50
    TBVRPromptWidget *_rightPromptWidget;	// 88 = 0x58
    TBVRSightView *_leftSightView;	// 96 = 0x60
    TBVRSightView *_rightSightView;	// 104 = 0x68
    TBVRVideoUILabel *_leftLabel;	// 112 = 0x70
    TBVRVideoUILabel *_rightLabel;	// 120 = 0x78
    UILabel *_leftRemainTimeLabel;	// 128 = 0x80
    UILabel *_rightRemainTimeLabel;	// 136 = 0x88
}

@property(retain, nonatomic) UILabel *rightRemainTimeLabel; // @synthesize rightRemainTimeLabel=_rightRemainTimeLabel;
@property(retain, nonatomic) UILabel *leftRemainTimeLabel; // @synthesize leftRemainTimeLabel=_leftRemainTimeLabel;
@property(retain, nonatomic) TBVRVideoUILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) TBVRVideoUILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) TBVRSightView *rightSightView; // @synthesize rightSightView=_rightSightView;
@property(retain, nonatomic) TBVRSightView *leftSightView; // @synthesize leftSightView=_leftSightView;
@property(retain, nonatomic) TBVRPromptWidget *rightPromptWidget; // @synthesize rightPromptWidget=_rightPromptWidget;
@property(retain, nonatomic) TBVRPromptWidget *leftPromptWidget; // @synthesize leftPromptWidget=_leftPromptWidget;
@property(retain, nonatomic) UILabel *switchLabel; // @synthesize switchLabel=_switchLabel;
@property(retain, nonatomic) UILabel *switchIconFont; // @synthesize switchIconFont=_switchIconFont;
@property(retain, nonatomic) UIView *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) TBVRIconFontControl *backControl; // @synthesize backControl=_backControl;
@property(nonatomic) long long playerViewStyle; // @synthesize playerViewStyle=_playerViewStyle;
@property(nonatomic) long long currentScreenModel; // @synthesize currentScreenModel=_currentScreenModel;
@property(nonatomic) __weak id <TBVRVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSingleScreen) _Bool singleScreen; // @synthesize singleScreen=_singleScreen;
- (void).cxx_destruct;
- (id)buildRemainTimeLabel;
- (void)layoutSubviews;
- (void)showRemainTimeLabel:(id)arg1;
- (void)hideSwitchView;
- (void)showSwitchView;
- (void)hideVideoTip;
- (void)showVideoLoadingTip:(id)arg1;
- (void)showVideoTip:(id)arg1;
- (void)lookAtObject;
- (void)sightViewLeaveObject;
- (void)hideSightView;
- (void)showSightView;
- (void)hideText;
- (void)showFailedText:(id)arg1;
- (void)showText:(id)arg1 iconFont:(id)arg2 animated:(_Bool)arg3;
- (void)showText:(id)arg1;
- (void)showLoadingView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 singleScreen:(_Bool)arg3;

@end
