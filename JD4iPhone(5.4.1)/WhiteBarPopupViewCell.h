//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, WareInfoWhitePlanInfo;

@interface WhiteBarPopupViewCell : UITableViewCell
{
    WareInfoWhitePlanInfo *_planInfo;
    UIImageView *_iconView;
    UILabel *_laterPayLabel;
    UILabel *_rateLabel;
    _Bool _userSelected;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) _Bool userSelected;
- (void)refreshUI;
@property(retain, nonatomic) WareInfoWhitePlanInfo *planInfo;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

