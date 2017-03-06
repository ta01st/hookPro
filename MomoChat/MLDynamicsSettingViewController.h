//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDFunctionSettingModel, NSString, UITableView;

@interface MLDynamicsSettingViewController : MLBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    MDFunctionSettingModel *_switchModel;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) MDFunctionSettingModel *switchModel; // @synthesize switchModel=_switchModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)reloadWithStatusDictionary:(id)arg1 key:(id)arg2;
- (void)setStatusFail:(id)arg1;
- (void)setStatusError:(id)arg1;
- (void)setStatusSuccess:(id)arg1;
- (void)setStatus:(_Bool)arg1;
- (void)getStatusFail:(id)arg1;
- (void)getStatusError:(id)arg1;
- (void)getStatusSuccess:(id)arg1;
- (void)getStatus;
- (void)removeHud;
- (void)showHud;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)livesettingClick;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupData;
- (void)addTableView;
- (void)dealloc;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
