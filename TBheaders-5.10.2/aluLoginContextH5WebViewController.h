//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluH5WebViewController.h"

@class aluLoginContext;

@interface aluLoginContextH5WebViewController : aluH5WebViewController
{
    _Bool _isToAddNick;	// 8 = 0x8
    aluLoginContext *_loginContext;	// 16 = 0x10
}

@property(retain, nonatomic) aluLoginContext *loginContext; // @synthesize loginContext=_loginContext;
@property(nonatomic) _Bool isToAddNick; // @synthesize isToAddNick=_isToAddNick;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)onBack;

@end
