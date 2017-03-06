//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MWPhoto-Protocol.h"

@class NSString, NSURL, UIImage;
@protocol SDWebImageOperation;

@interface MWPhoto : NSObject <MWPhoto>
{
    _Bool _loadingInProgress;	// 8 = 0x8
    id <SDWebImageOperation> _webImageOperation;	// 16 = 0x10
    _Bool _emptyImage;	// 24 = 0x18
    _Bool _isVideo;	// 25 = 0x19
    UIImage *_underlyingImage;	// 32 = 0x20
    NSString *_caption;	// 40 = 0x28
    NSURL *_videoURL;	// 48 = 0x30
    UIImage *_image;	// 56 = 0x38
    NSURL *_photoURL;	// 64 = 0x40
    struct CGSize _assetTargetSize;	// 72 = 0x48
}

+ (id)videoWithURL:(id)arg1;
+ (id)photoWithURL:(id)arg1;
+ (id)photoWithImage:(id)arg1;
@property(nonatomic) struct CGSize assetTargetSize; // @synthesize assetTargetSize=_assetTargetSize;
@property(retain, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool emptyImage; // @synthesize emptyImage=_emptyImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (void).cxx_destruct;
- (void)cancelAnyLoading;
- (void)postCompleteNotification;
- (void)imageLoadingComplete;
- (void)unloadUnderlyingImage;
- (void)_performLoadUnderlyingImageAndNotifyWithAssetsLibraryURL:(id)arg1;
- (void)_performLoadUnderlyingImageAndNotifyWithLocalFileURL:(id)arg1;
- (void)_performLoadUnderlyingImageAndNotifyWithWebURL:(id)arg1;
- (void)performLoadUnderlyingImageAndNotify;
- (void)loadUnderlyingImageAndNotify;
- (id)initWithVideoURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
