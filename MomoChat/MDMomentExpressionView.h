//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MDCollectionHelperDelegate.h"

@class MDCollectionHelper, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView;

@interface MDMomentExpressionView : UIView <MDCollectionHelperDelegate>
{
    UIImageView *_backGroundView;
    UIView *_topContentView;
    UIButton *_closeButton;
    UIView *_bottomContentView;
    UICollectionView *_collectionView;
    MDCollectionHelper *_collectionHelper;
    NSMutableArray *_picDateArray;
    id <MDMomentExpressionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MDMomentExpressionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *picDateArray; // @synthesize picDateArray=_picDateArray;
@property(retain, nonatomic) MDCollectionHelper *collectionHelper; // @synthesize collectionHelper=_collectionHelper;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *bottomContentView; // @synthesize bottomContentView=_bottomContentView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
@property(retain, nonatomic) UIImageView *backGroundView; // @synthesize backGroundView=_backGroundView;
- (void).cxx_destruct;
- (void)closeAction;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)cellReuseIdentifer:(long long)arg1;
- (id)collectionCellIdentifier:(id)arg1;
- (id)classNameCellArray;
- (void)setPicDatesArrayWithArray:(id)arg1;
- (void)setBackGroundViewWithImage:(id)arg1;
- (void)updateAllFrames;
- (void)setupAllContents;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

