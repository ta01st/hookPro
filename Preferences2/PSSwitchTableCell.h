//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSControlTableCell.h>

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell
{
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) BOOL loading;
- (id)controlValue;
- (id)newControl;
- (void)setCellEnabled:(BOOL)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2;
- (BOOL)canReload;
- (void)prepareForReuse;
- (void)setValue:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

