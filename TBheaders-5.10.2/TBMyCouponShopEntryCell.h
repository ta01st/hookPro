//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TBCouponCellDelegate-Protocol.h"

@class NSDictionary, NSString, UIButton, UIImageView, UILabel, UIView;

@interface TBMyCouponShopEntryCell : UITableViewCell <TBCouponCellDelegate>
{
    UIView *_lineGroupView;	// 8 = 0x8
    UIView *_lineGroupView2;	// 16 = 0x10
    UIButton *_shopView;	// 24 = 0x18
    UIImageView *_logo;	// 32 = 0x20
    UILabel *_shopName;	// 40 = 0x28
    NSString *_url;	// 48 = 0x30
    NSDictionary *_userInfo;	// 56 = 0x38
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UILabel *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UIButton *shopView; // @synthesize shopView=_shopView;
@property(retain, nonatomic) UIView *lineGroupView2; // @synthesize lineGroupView2=_lineGroupView2;
@property(retain, nonatomic) UIView *lineGroupView; // @synthesize lineGroupView=_lineGroupView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)clickMoreShop:(id)arg1;
- (void)renderMoreShopView;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

