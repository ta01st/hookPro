//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface JDJPUsedLinkmanTableViewCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_mobileLabel;
    UILabel *_emailLabel;
    UIImageView *_lineView;
}

@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)setCellDate:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

