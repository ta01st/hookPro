//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDNoticeHeaderView, NSString, UIButton, UIImageView, UILabel;

@interface ContactNoticeActionBaseCell : UITableViewCell
{
    MDNoticeHeaderView *headerView;
    UILabel *nameLabel;
    UILabel *contentLabel;
    UILabel *distanceLabel;
    UIButton *iconBtn;
    UIImageView *customImgView;
}

@property(retain, nonatomic) MDNoticeHeaderView *headerView; // @synthesize headerView;
@property(readonly, retain, nonatomic) UIButton *iconBtn; // @synthesize iconBtn;
- (void)refreshHeaderViewWithGameNotice:(id)arg1 indexPath:(id)arg2;
- (void)refreshHeaderViewWithRadarNotice:(id)arg1 indexPath:(id)arg2;
- (void)refreshHeaderViewWithNotice:(id)arg1 indexPath:(id)arg2;
- (void)resetCellWithGameNotice:(id)arg1;
- (void)resetCellWithRadarNotice:(id)arg1;
- (void)resetCellWithContactNotice:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *userName;
- (void)setDistance:(double)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)stretchImage:(id)arg1;
- (id)initializeLableWithFrame:(struct CGRect)arg1 andFont:(id)arg2;
- (id)initializeButtonWithFrame:(struct CGRect)arg1;

@end

