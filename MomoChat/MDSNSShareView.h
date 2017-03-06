//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"

@class GMGridView, GMGridViewCell, NSArray, NSMutableDictionary, NSString;

@interface MDSNSShareView : UIView <GMGridViewDataSource, GMGridViewActionDelegate>
{
    GMGridView *_gridView;
    NSArray *_snsList;
    NSMutableDictionary *_snsOptions;
    GMGridViewCell *_sinaWeiboCell;
    GMGridViewCell *_tencentWeiboCell;
    GMGridViewCell *_renrenCell;
}

@property(retain, nonatomic) GMGridViewCell *renrenCell; // @synthesize renrenCell=_renrenCell;
@property(retain, nonatomic) GMGridViewCell *tencentWeiboCell; // @synthesize tencentWeiboCell=_tencentWeiboCell;
@property(retain, nonatomic) GMGridViewCell *sinaWeiboCell; // @synthesize sinaWeiboCell=_sinaWeiboCell;
@property(retain, nonatomic) NSMutableDictionary *snsOptions; // @synthesize snsOptions=_snsOptions;
@property(retain, nonatomic) NSArray *snsList; // @synthesize snsList=_snsList;
@property(retain, nonatomic) GMGridView *gridView; // @synthesize gridView=_gridView;
- (id)snsCellForType:(int)arg1;
- (id)unSelectedImageNameForSNSIndex:(int)arg1;
- (id)selectedImageNameForSNSIndex:(int)arg1;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)dealloc;
- (void)initSNSOptions;
- (id)initWithFrame:(struct CGRect)arg1 andSNSList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
