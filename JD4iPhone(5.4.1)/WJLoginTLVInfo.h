//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface WJLoginTLVInfo : NSObject <NSCopying>
{
    _Bool _refreshAuthCode;
    unsigned char _replyCode;
    unsigned char _type;
    short _headerVersion;
    short _guidVersion;
    short _terminalType;
    short _dbBufVer;
    short _appID;
    int _partion;
    int _seq;
    int _clientIP;
    int _osVer;
    int _getSig;
    int _elapsedTime;
    int _isNeedFigureUrl;
    long long _uid;
    NSString *_account;
    NSString *_password;
    NSString *_guid;
    NSString *_clientType;
    NSString *_clientOSVersion;
    NSString *_appClientVer;
    NSString *_screen;
    NSString *_appName;
    NSString *_networkType;
    NSString *_area;
    NSString *_uuid;
    NSString *_sdkVersion;
    NSData *_tgtA2;
    NSString *_pin;
    NSString *_token;
    NSString *_encryptKey;
    NSString *_authCode;
    NSString *_appToH5Url;
    NSString *_phoneNumber;
    NSString *_messagePwd;
    NSString *_wxCode;
    NSString *_qqAccessToken;
    NSString *_qqOpenID;
    NSString *_qrCodeKey;
    NSString *_tips;
    NSString *_buttionTips;
    NSString *_whwswswws;
    NSString *_deviceName;
    NSString *_deviceModel;
    NSString *_deviceBrand;
    NSString *_deviceReserve;
    NSString *_countryDistrictCode;
    NSString *_imageURL;
    NSString *_appSignture;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *appSignture; // @synthesize appSignture=_appSignture;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) int isNeedFigureUrl; // @synthesize isNeedFigureUrl=_isNeedFigureUrl;
@property(copy, nonatomic) NSString *countryDistrictCode; // @synthesize countryDistrictCode=_countryDistrictCode;
@property(copy, nonatomic) NSString *deviceReserve; // @synthesize deviceReserve=_deviceReserve;
@property(copy, nonatomic) NSString *deviceBrand; // @synthesize deviceBrand=_deviceBrand;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *whwswswws; // @synthesize whwswswws=_whwswswws;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *buttionTips; // @synthesize buttionTips=_buttionTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *qrCodeKey; // @synthesize qrCodeKey=_qrCodeKey;
@property(copy, nonatomic) NSString *qqOpenID; // @synthesize qqOpenID=_qqOpenID;
@property(copy, nonatomic) NSString *qqAccessToken; // @synthesize qqAccessToken=_qqAccessToken;
@property(copy, nonatomic) NSString *wxCode; // @synthesize wxCode=_wxCode;
@property(copy, nonatomic) NSString *messagePwd; // @synthesize messagePwd=_messagePwd;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *appToH5Url; // @synthesize appToH5Url=_appToH5Url;
@property(nonatomic) unsigned char replyCode; // @synthesize replyCode=_replyCode;
@property(nonatomic) int elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) _Bool refreshAuthCode; // @synthesize refreshAuthCode=_refreshAuthCode;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) NSData *tgtA2; // @synthesize tgtA2=_tgtA2;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(nonatomic) int getSig; // @synthesize getSig=_getSig;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *screen; // @synthesize screen=_screen;
@property(copy, nonatomic) NSString *appClientVer; // @synthesize appClientVer=_appClientVer;
@property(copy, nonatomic) NSString *clientOSVersion; // @synthesize clientOSVersion=_clientOSVersion;
@property(copy, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(nonatomic) short appID; // @synthesize appID=_appID;
@property(nonatomic) short dbBufVer; // @synthesize dbBufVer=_dbBufVer;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) int osVer; // @synthesize osVer=_osVer;
@property(nonatomic) short terminalType; // @synthesize terminalType=_terminalType;
@property(nonatomic) short guidVersion; // @synthesize guidVersion=_guidVersion;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) short headerVersion; // @synthesize headerVersion=_headerVersion;
@property(nonatomic) int clientIP; // @synthesize clientIP=_clientIP;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int partion; // @synthesize partion=_partion;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

