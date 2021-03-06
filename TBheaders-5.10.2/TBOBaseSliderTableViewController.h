//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseTableViewController.h"

#import "TBOSegmentDelegate-Protocol.h"

@class NSString, TBOSegmentControl, UITableViewCell, UIViewController;

@interface TBOBaseSliderTableViewController : TBOBaseTableViewController <TBOSegmentDelegate>
{
    long long _selectedIndex;	// 16 = 0x10
    UITableViewCell *_lastCell;	// 24 = 0x18
    TBOSegmentControl *_segment;	// 32 = 0x20
    UIViewController *_lastVc;	// 40 = 0x28
}

@property(nonatomic) __weak UIViewController *lastVc; // @synthesize lastVc=_lastVc;
@property(retain, nonatomic) TBOSegmentControl *segment; // @synthesize segment=_segment;
@property(nonatomic) __weak UITableViewCell *lastCell; // @synthesize lastCell=_lastCell;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)segment:(id)arg1 setItem:(id)arg2 selected:(_Bool)arg3;
- (id)segment:(id)arg1 itemData:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollToSelectedIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)enableScrollsToTopWithCell:(id)arg1 enabled:(_Bool)arg2;
- (void)refresh;
- (void)viewModelDataChanged;
- (void)viewDidLoad;
- (_Bool)isNeedMore;
- (_Bool)isNeedRefresh;
- (id)tabs;
- (void)loadViewForCell:(id)arg1 indexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onSelectedChanged:(long long)arg1;
- (id)viewControllerForCurrent;
- (id)cellForRow:(long long)arg1;
- (id)cellForCurrent;
- (id)cellsMap;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

