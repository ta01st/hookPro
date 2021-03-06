//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBPaymentBaseReturnModel.h"

@class CBPaymentModel, NSString;

@interface JDPVisitControlReturnModel : CBPaymentBaseReturnModel
{
    NSString *_payParam;
    NSString *_repeatParam;
    CBPaymentModel *_paymentModel;
    NSString *_appId;
    NSString *_account;
    NSString *_helpUrl;
}

@property(copy, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) CBPaymentModel *paymentModel; // @synthesize paymentModel=_paymentModel;
@property(copy, nonatomic) NSString *repeatParam; // @synthesize repeatParam=_repeatParam;
@property(copy, nonatomic) NSString *payParam; // @synthesize payParam=_payParam;
- (void).cxx_destruct;

@end

