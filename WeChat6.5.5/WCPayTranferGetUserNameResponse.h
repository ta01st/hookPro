//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WCPayTranferGetUserNameResponse : NSObject
{
    NSString *m_nsFacingPaidID;
    NSString *m_nsUserNmae;
    NSString *m_nsTruthName;
    unsigned int m_uiTimeStamp;
    unsigned int m_uiPayScene;
    long long m_llTotalMoney;
    NSString *m_nsProductDetail;
    NSString *m_nsTransferXmlContent;
    NSString *_m_uifaceTofaceName;
    NSString *_m_uifaceTofaceDescTitle;
    NSString *_m_uifaceTofacePayerDescTitle;
}

@property(retain, nonatomic) NSString *m_uifaceTofacePayerDescTitle; // @synthesize m_uifaceTofacePayerDescTitle=_m_uifaceTofacePayerDescTitle;
@property(retain, nonatomic) NSString *m_uifaceTofaceDescTitle; // @synthesize m_uifaceTofaceDescTitle=_m_uifaceTofaceDescTitle;
@property(retain, nonatomic) NSString *m_uifaceTofaceName; // @synthesize m_uifaceTofaceName=_m_uifaceTofaceName;
@property(retain, nonatomic) NSString *m_nsTransferXmlContent; // @synthesize m_nsTransferXmlContent;
@property(retain, nonatomic) NSString *m_nsFacingPaidID; // @synthesize m_nsFacingPaidID;
@property(retain, nonatomic) NSString *m_nsProductDetail; // @synthesize m_nsProductDetail;
@property(nonatomic) long long m_llTotalMoney; // @synthesize m_llTotalMoney;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;
@property(nonatomic) unsigned int m_uiTimeStamp; // @synthesize m_uiTimeStamp;
@property(retain, nonatomic) NSString *m_nsTruthName; // @synthesize m_nsTruthName;
@property(retain, nonatomic) NSString *m_nsUserNmae; // @synthesize m_nsUserNmae;
- (void).cxx_destruct;
- (void)dealloc;

@end

