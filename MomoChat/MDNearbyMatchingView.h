//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MDPhotoPreviewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class MDAnimatedImageView, MDHeadPictureItem, MDUserIconsView, MDUserProfile, MDWeakProxy, NSMutableArray, NSString, UIImageView, UILabel;

@interface MDNearbyMatchingView : UIView <MDPhotoPreviewControllerDelegate, UIAlertViewDelegate>
{
    _Bool _isPhone4;
    MDUserProfile *_upi;
    id <MDNearbyMatchingViewDelegate> _delegate;
    UIView *_profilePhotoView;
    UIView *_titleView;
    UIView *_signView;
    UIView *_dynamicView;
    UILabel *_photosCountLabel;
    UILabel *_nameTitleLabel;
    UILabel *_distanceLabel;
    UILabel *_recommendLabel;
    UILabel *_signLabel;
    UILabel *_dynamicLabel;
    NSMutableArray *_profilePicArray;
    MDUserIconsView *_userIconsView;
    UIView *_largePhotoMask;
    MDHeadPictureItem *_currentPicItem;
    MDWeakProxy *_proxy;
    UIImageView *_maskLikeIcon;
    UIView *_upLoadCoverView;
    UIImageView *_changeCoverView;
    MDAnimatedImageView *_superLikeView;
    UIImageView *_superLikeMask;
    long long _viewType;
}

@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) UIImageView *superLikeMask; // @synthesize superLikeMask=_superLikeMask;
@property(retain, nonatomic) MDAnimatedImageView *superLikeView; // @synthesize superLikeView=_superLikeView;
@property(retain, nonatomic) UIImageView *changeCoverView; // @synthesize changeCoverView=_changeCoverView;
@property(retain, nonatomic) UIView *upLoadCoverView; // @synthesize upLoadCoverView=_upLoadCoverView;
@property(retain, nonatomic) UIImageView *maskLikeIcon; // @synthesize maskLikeIcon=_maskLikeIcon;
@property(retain, nonatomic) MDWeakProxy *proxy; // @synthesize proxy=_proxy;
@property(nonatomic) _Bool isPhone4; // @synthesize isPhone4=_isPhone4;
@property(retain, nonatomic) MDHeadPictureItem *currentPicItem; // @synthesize currentPicItem=_currentPicItem;
@property(retain, nonatomic) UIView *largePhotoMask; // @synthesize largePhotoMask=_largePhotoMask;
@property(retain, nonatomic) MDUserIconsView *userIconsView; // @synthesize userIconsView=_userIconsView;
@property(retain, nonatomic) NSMutableArray *profilePicArray; // @synthesize profilePicArray=_profilePicArray;
@property(retain, nonatomic) UILabel *dynamicLabel; // @synthesize dynamicLabel=_dynamicLabel;
@property(retain, nonatomic) UILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *nameTitleLabel; // @synthesize nameTitleLabel=_nameTitleLabel;
@property(retain, nonatomic) UILabel *photosCountLabel; // @synthesize photosCountLabel=_photosCountLabel;
@property(retain, nonatomic) UIView *dynamicView; // @synthesize dynamicView=_dynamicView;
@property(retain, nonatomic) UIView *signView; // @synthesize signView=_signView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *profilePhotoView; // @synthesize profilePhotoView=_profilePhotoView;
@property(nonatomic) id <MDNearbyMatchingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDUserProfile *upi; // @synthesize upi=_upi;
- (void).cxx_destruct;
- (id)imageWithCardSelectState:(long long)arg1;
- (void)autoAnimationWithMaskViewType:(long long)arg1;
- (void)animationWithMaskViewFator:(double)arg1 andType:(long long)arg2;
- (void)addOrChangeCoverImage:(_Bool)arg1;
- (id)superLikeAnimationImageStringArray;
- (void)animationWithSuperLikeFromMeWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)animationWithSuperLikeToMe;
- (void)setFirstCoverImageView:(id)arg1;
- (id)gridPhotoImageViewAtIndex:(unsigned long long)arg1 defaultValue:(id)arg2;
- (void)startLoadImage;
- (void)cancleAllGridsLoadImage;
- (void)cancleRightSamllGridsLoadImage;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (struct CGRect)toRect:(id)arg1 index:(long long)arg2;
- (void)doLoadVideo;
- (void)loadVideo;
- (void)showPhotoPreviewWithIndex:(long long)arg1 rect:(struct CGRect)arg2 photos:(id)arg3;
- (void)loadPhotoItem:(id)arg1 withPhotoList:(id)arg2 inRect:(struct CGRect)arg3;
- (void)doLoadPhotoOrVideoWithRect:(struct CGRect)arg1 cellIndex:(long long)arg2;
- (void)modifyCoverEvent;
- (void)photosTouchEvent:(id)arg1;
- (struct CGSize)obtainStringHeightWithText:(id)arg1 andFont:(id)arg2 andKWith:(double)arg3;
- (void)fillDynamicView;
- (void)fillSignView;
- (void)fillTitleView;
- (void)fillAllProfilePhotoView;
- (void)refreshRightSamllGrids;
- (void)refreshLeftBigGridsAndResetAllGrids;
- (void)reloadGirdPhotoWithImageView:(id)arg1 imageContent:(id)arg2 andFileType:(int)arg3;
- (_Bool)checkIsCoverShowAtFirstIndex;
- (void)refreshSmallGrid:(long long)arg1;
- (void)refreshLargeQuickMatchCover;
- (void)resetDefaultGirds:(id)arg1;
- (void)fillProfilePicView;
- (id)dynamicLab;
- (void)createAllGridImageView;
- (void)addPartline;
- (void)addWhitekCornerRadiusBackView;
- (void)createUI;
- (void)reloadView;
- (void)clear;
- (void)refreshViewWithUserProfile:(id)arg1;
- (void)removeAllProfilePhotoResource;
- (id)initWithOrigin:(struct CGPoint)arg1 Type:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
