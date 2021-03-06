//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOCoreFeedView.h"

@class TBOFeed, TBOMultiImageRender, UIButton, UIView;

@interface TBOVideoFeedView : TBOCoreFeedView
{
    UIView *_multiImageContainer;	// 8 = 0x8
    UIButton *_playButton;	// 16 = 0x10
    UIView *_backgroundView;	// 24 = 0x18
    TBOMultiImageRender *_imageRender;	// 32 = 0x20
    TBOFeed *_localFeedData;	// 40 = 0x28
}

@property(retain, nonatomic) TBOFeed *localFeedData; // @synthesize localFeedData=_localFeedData;
@property(retain, nonatomic) TBOMultiImageRender *imageRender; // @synthesize imageRender=_imageRender;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *multiImageContainer; // @synthesize multiImageContainer=_multiImageContainer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshDataForView:(id)arg1;
- (void)resetPlayButton;
- (void)tapGoToDetail:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

