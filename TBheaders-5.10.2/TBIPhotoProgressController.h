//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBInteractBaseViewController.h"

#import "TBICameraTakeControllerDelegate-Protocol.h"
#import "TBIMutiSelectionViewDelegate-Protocol.h"

@class NSString, TBICameraTakeController, TBIMutiSelectionViewController, TBIPhotoPreviewView, UIImage, UINavigationController, UIViewController;

@interface TBIPhotoProgressController : TBInteractBaseViewController <TBICameraTakeControllerDelegate, TBIMutiSelectionViewDelegate>
{
    UIImage *_image;	// 8 = 0x8
    TBIPhotoPreviewView *_previewView;	// 16 = 0x10
    UINavigationController *_cameraNav;	// 24 = 0x18
    TBICameraTakeController *_cameraRoot;	// 32 = 0x20
    UINavigationController *_albumNav;	// 40 = 0x28
    TBIMutiSelectionViewController *_albumRoot;	// 48 = 0x30
    UINavigationController *_editNav;	// 56 = 0x38
    UIViewController *_editRoot;	// 64 = 0x40
    _Bool _comeFromCamera;	// 72 = 0x48
    UIImage *_originalImage;	// 80 = 0x50
}

@property(nonatomic) _Bool comeFromCamera; // @synthesize comeFromCamera=_comeFromCamera;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void).cxx_destruct;
- (void)loadFilter:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)cameraControllerShouldGoAlbum:(id)arg1 album:(id)arg2;
- (void)cameraControllerShouldTakePhotoFinish:(id)arg1 photo:(id)arg2;
- (void)cameraControllerShouldShouldExit:(id)arg1;
- (void)TBIMutiSelectionViewShouldGoCamera:(id)arg1;
- (void)TBIMutiSelectionView:(id)arg1 shouldSend:(id)arg2;
- (void)TBIMutiSelectionViewShouldExit:(id)arg1;
- (void)sendArray:(id)arg1 resultCode:(long long)arg2;
- (void)initCamera;
- (void)switchToCamera;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

