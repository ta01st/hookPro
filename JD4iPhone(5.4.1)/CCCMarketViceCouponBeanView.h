//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CCCMarketBeanView, UIButton, UIColor, UIImageView;

@interface CCCMarketViceCouponBeanView : UIView
{
    CCCMarketBeanView *_beanView;
    UIColor *_progressBackgroundColor;
    UIButton *_exchangeCouponButton;
    UIImageView *_beanIconImageView;
}

@property(retain, nonatomic) UIImageView *beanIconImageView; // @synthesize beanIconImageView=_beanIconImageView;
@property(retain, nonatomic) UIButton *exchangeCouponButton; // @synthesize exchangeCouponButton=_exchangeCouponButton;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) CCCMarketBeanView *beanView; // @synthesize beanView=_beanView;
- (void).cxx_destruct;
- (void)updateViewWithItem:(id)arg1 progressColor:(id)arg2 viceCouponColor:(id)arg3 BackgroundImage:(id)arg4;
- (void)setUpSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
