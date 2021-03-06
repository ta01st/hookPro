//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage, UIView, UIViewController;

@interface TBPhotoSearchExtensionService : NSObject
{
    UIView *_backView;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    UIViewController *_fromSource;	// 32 = 0x20
}

+ (id)shareService;
@property(nonatomic) __weak UIViewController *fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)search:(id)arg1;
- (void)cancel:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showImage:(id)arg1;
- (void)handleURLActionRequest:(id)arg1;

@end

