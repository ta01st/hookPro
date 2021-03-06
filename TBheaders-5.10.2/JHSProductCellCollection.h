//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSProductCell.h"

@class CenterLineLabel, JHSFreeLayoutButton, NSArray, UIImageView, UILabel;

@interface JHSProductCellCollection : JHSProductCell
{
    _Bool _shouldStartAnimation;	// 8 = 0x8
    UIImageView *_productImage;	// 16 = 0x10
    CenterLineLabel *_originalPriceLabel;	// 24 = 0x18
    UILabel *_priceLabel;	// 32 = 0x20
    UILabel *_productNameLabel;	// 40 = 0x28
    UIImageView *_discountIconImageView;	// 48 = 0x30
    NSArray *_iconImages;	// 56 = 0x38
    NSArray *_tipBGs;	// 64 = 0x40
    NSArray *_tipLabels;	// 72 = 0x48
    NSArray *_tipIcons;	// 80 = 0x50
    JHSFreeLayoutButton *_collectButton;	// 88 = 0x58
    CDUnknownBlockType _doubleTapCallback;	// 96 = 0x60
}

@property(nonatomic) _Bool shouldStartAnimation; // @synthesize shouldStartAnimation=_shouldStartAnimation;
@property(copy, nonatomic) CDUnknownBlockType doubleTapCallback; // @synthesize doubleTapCallback=_doubleTapCallback;
@property(retain, nonatomic) JHSFreeLayoutButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) NSArray *tipIcons; // @synthesize tipIcons=_tipIcons;
@property(retain, nonatomic) NSArray *tipLabels; // @synthesize tipLabels=_tipLabels;
@property(retain, nonatomic) NSArray *tipBGs; // @synthesize tipBGs=_tipBGs;
@property(retain, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
@property(retain, nonatomic) UIImageView *discountIconImageView; // @synthesize discountIconImageView=_discountIconImageView;
@property(retain, nonatomic) UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) CenterLineLabel *originalPriceLabel; // @synthesize originalPriceLabel=_originalPriceLabel;
@property(retain, nonatomic) UIImageView *productImage; // @synthesize productImage=_productImage;
- (void).cxx_destruct;
- (void)doubleTapCallback:(id)arg1;
- (void)addDoubleTagGesture;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)makeUpCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end

