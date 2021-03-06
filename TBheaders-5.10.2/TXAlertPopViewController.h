//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TXAlertPopView, UIButton, UIImageView;
@protocol TXAlertPopViewControllerDelegate;

@interface TXAlertPopViewController : UIViewController
{
    UIImageView *_screenShotView;	// 8 = 0x8
    UIButton *_coverView;	// 16 = 0x10
    TXAlertPopView *_alertView;	// 24 = 0x18
    id <TXAlertPopViewControllerDelegate> _delegate;	// 32 = 0x20
}

@property(nonatomic) __weak id <TXAlertPopViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak TXAlertPopView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIButton *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *screenShotView; // @synthesize screenShotView=_screenShotView;
- (void).cxx_destruct;
- (void)hideAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)showAlert;
- (void)addAlertView;
- (void)coverViewClick;
- (void)addCoverView;
- (void)addScreenShot;
- (void)viewDidLoad;

@end

