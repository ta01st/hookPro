//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBGuideBaseCollectionViewCell.h"

@class NSMutableArray, UIButton, UILabel, UIView;

@interface TBGuideAggregateCollectionViewCell : TBGuideBaseCollectionViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subTitleLabel;	// 16 = 0x10
    NSMutableArray *_images;	// 24 = 0x18
    UIView *_textBorderView;	// 32 = 0x20
    UIButton *_textBackgroundView;	// 40 = 0x28
    UILabel *_rightIcon;	// 48 = 0x30
}

+ (struct CGSize)contentSize;
+ (struct CGSize)contentSizeWithRowType:(int)arg1;
@property(retain, nonatomic) UILabel *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIButton *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) UIView *textBorderView; // @synthesize textBorderView=_textBorderView;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)openUrl:(id)arg1 trackInfo:(id)arg2 algArgs:(id)arg3;
- (void)clickMainButton:(id)arg1;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)clickSubButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

