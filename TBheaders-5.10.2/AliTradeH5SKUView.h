//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class AliDetailModel, NSMutableDictionary, NSString, TBDetailUIWebView;
@protocol AliTradeSKUViewDelegate;

@interface AliTradeH5SKUView : UIView <UIWebViewDelegate>
{
    unsigned long long _sourceType;	// 8 = 0x8
    id <AliTradeSKUViewDelegate> _delegate;	// 16 = 0x10
    AliDetailModel *_detailModel;	// 24 = 0x18
    NSMutableDictionary *_params;	// 32 = 0x20
    NSString *_detailData;	// 40 = 0x28
    NSString *_buttonAction;	// 48 = 0x30
    TBDetailUIWebView *_skuWebView;	// 56 = 0x38
}

@property(retain, nonatomic) TBDetailUIWebView *skuWebView; // @synthesize skuWebView=_skuWebView;
@property(retain, nonatomic) NSString *buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) NSString *detailData; // @synthesize detailData=_detailData;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) __weak id <AliTradeSKUViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (void)createWebViewWithUrl:(id)arg1 detailModel:(id)arg2 detailData:(id)arg3 param:(id)arg4;
- (void)processSupport:(id)arg1;
- (void)addItemToCart:(id)arg1;
- (void)add2Cart:(id)arg1;
- (void)addParams:(id)arg1;
- (void)doBuyNow:(id)arg1;
- (void)processH5Result:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 url:(id)arg2 detailModel:(id)arg3 param:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

