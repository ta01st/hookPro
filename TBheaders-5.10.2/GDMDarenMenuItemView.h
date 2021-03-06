//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDMDarenMenuItem;

@interface GDMDarenMenuItemView : UIView
{
    GDMDarenMenuItem *_item;	// 8 = 0x8
    UIView *_displayView;	// 16 = 0x10
    _Bool _isVisible;	// 24 = 0x18
}

@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain) GDMDarenMenuItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)onCloseSubItemViewCallBack:(id)arg1;
- (void)onItemCallBack:(id)arg1;
- (void)onSubItemCallBack:(id)arg1;
- (void)hideSubItemViewVisiable:(id)arg1;
- (void)SetSubItemViewVisiable:(_Bool)arg1;
- (id)itemDisplayView;
- (void)onBackGorundNoftiication:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end

