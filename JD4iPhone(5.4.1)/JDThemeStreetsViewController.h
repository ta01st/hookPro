//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDThemeStreetTabBarDelegate.h"
#import "JDThemeStreetViewDelegate.h"

@class JDStoreNetwork, JDThemeStreetTabBar, NSMutableArray, NSString, UIButton, UIImageView, UITableView;

@interface JDThemeStreetsViewController : JDViewController <JDThemeStreetTabBarDelegate, JDThemeStreetViewDelegate>
{
    _Bool _subscribable;
    NSMutableArray *_themeStreets;
    NSMutableArray *_tableViewData;
    JDThemeStreetTabBar *_tabBar;
    UITableView *_tableView;
    UIButton *_backToTopButton;
    UIImageView *_guideView;
    JDStoreNetwork *_networkController;
}

@property(retain, nonatomic) JDStoreNetwork *networkController; // @synthesize networkController=_networkController;
@property(retain, nonatomic) UIImageView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIButton *backToTopButton; // @synthesize backToTopButton=_backToTopButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) JDThemeStreetTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) NSMutableArray *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(retain, nonatomic) NSMutableArray *themeStreets; // @synthesize themeStreets=_themeStreets;
@property(nonatomic, getter=isSubscribable) _Bool subscribable; // @synthesize subscribable=_subscribable;
- (void).cxx_destruct;
- (void)themeStreetView:(id)arg1 didSelectThemeStreet:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)themeStreetTabBar:(id)arg1 didSelectSortType:(long long)arg2;
- (void)didFinishRequestThemeStreetsWithComponents:(id)arg1 error:(id)arg2;
- (void)requestThemeStreetsWithSortType:(long long)arg1;
- (void)backToTopButtonClicked:(id)arg1;
- (void)pushSubscriptionViewController;
- (void)subscribeButtonClicked:(id)arg1;
- (void)guideViewClicked:(id)arg1;
- (void)addGuideView;
- (void)reconnect;
- (void)didFinishSubscribingThemeStreetsWithSetup:(id)arg1 components:(id)arg2 error:(id)arg3;
- (void)subscribeThemeStreetsWithSetup:(id)arg1;
- (void)subscriptionViewControllerWillPopped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

