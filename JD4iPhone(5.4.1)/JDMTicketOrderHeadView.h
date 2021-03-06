//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDImageView, UILabel;

@interface JDMTicketOrderHeadView : UIView
{
    JDImageView *_posterView;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    UILabel *_countLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *posterView; // @synthesize posterView=_posterView;
- (void).cxx_destruct;
- (id)textLabelWithFrame:(struct CGRect)arg1 withColor:(id)arg2 withFont:(id)arg3;
- (void)configHeadView;
- (void)configWithDataWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

