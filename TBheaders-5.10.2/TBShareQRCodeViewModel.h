//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareQRCodeNewView, UIViewController;

@interface TBShareQRCodeViewModel : NSObject
{
    CDUnknownBlockType _successBlock;	// 8 = 0x8
    CDUnknownBlockType _errorBlock;	// 16 = 0x10
    CDUnknownBlockType _cancelBlock;	// 24 = 0x18
    TBShareQRCodeNewView *_qrView;	// 32 = 0x20
    long long _author;	// 40 = 0x28
    UIViewController *_parentViewController;	// 48 = 0x30
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) long long author; // @synthesize author=_author;
@property(retain, nonatomic) TBShareQRCodeNewView *qrView; // @synthesize qrView=_qrView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)dismissQRView;
- (void)dismiss;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)shareWithModel:(id)arg1 viewController:(id)arg2;

@end

