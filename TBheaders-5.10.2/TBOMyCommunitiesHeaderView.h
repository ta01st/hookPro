//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface TBOMyCommunitiesHeaderView : UIView
{
    UILabel *_myCommLabel;	// 8 = 0x8
    UIButton *_settings;	// 16 = 0x10
}

@property(retain, nonatomic) UIButton *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UILabel *myCommLabel; // @synthesize myCommLabel=_myCommLabel;
- (void).cxx_destruct;
- (void)clickGoToUserComm;
- (id)initWithFrame:(struct CGRect)arg1;

@end

