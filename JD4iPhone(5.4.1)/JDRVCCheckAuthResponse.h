//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JDRVCCheckAuthResponse : NSObject
{
    int _resultCode;
    int _authWay;
    NSString *_desc;
    NSString *_bsid;
    NSString *_userMsg;
    NSString *_toast;
}

@property(retain, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSString *userMsg; // @synthesize userMsg=_userMsg;
@property(retain, nonatomic) NSString *bsid; // @synthesize bsid=_bsid;
@property(nonatomic) int authWay; // @synthesize authWay=_authWay;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (void)responseWithDelegte:(id)arg1 didFinish:(CDUnknownBlockType)arg2;
- (void)dicToObj:(id)arg1;

@end
