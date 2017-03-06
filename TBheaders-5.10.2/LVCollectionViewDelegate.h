//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVScrollViewDelegate.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface LVCollectionViewDelegate : LVScrollViewDelegate <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableSet *_registeredIds;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableSet *registeredIds; // @synthesize registeredIds=_registeredIds;
- (void).cxx_destruct;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)callWithScrollArgsForKey:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)retInsetCallKey1:(const char *)arg1 key2:(const char *)arg2 mapedSection:(long long)arg3 mapedRow:(long long)arg4;
- (struct CGSize)retSizeCallKey1:(const char *)arg1 key2:(const char *)arg2 key3:(const char *)arg3 mapedSection:(long long)arg4 mapedRow:(long long)arg5;
- (id)retStringCallKey1:(const char *)arg1 key2:(const char *)arg2 mapedSection:(long long)arg3 mapedRow:(long long)arg4;
- (double)retFloatCallKey1:(const char *)arg1 key2:(const char *)arg2 mapedSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)tryRegisterId:(id)arg1 inCollectionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
