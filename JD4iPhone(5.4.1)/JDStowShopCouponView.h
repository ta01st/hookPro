//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class JDStowShopCouponModel, NSString, UIImageView, UILabel;

@interface JDStowShopCouponView : UIButton
{
    UIImageView *m_doneImageView;
    UILabel *m_couponLabel;
    UILabel *m_largeMoneyLabel;
    UILabel *m_dongMoneyLabel;
    NSString *type;
    JDStowShopCouponModel *couponModel;
}

@property(retain, nonatomic) JDStowShopCouponModel *couponModel; // @synthesize couponModel;
@property(retain, nonatomic) NSString *type; // @synthesize type;
- (void)setCouponState:(_Bool)arg1;
- (void)setTicketUnitViewValue:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

