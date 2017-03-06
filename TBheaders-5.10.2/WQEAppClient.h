//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WQAuth, WQEAppEntity;

@interface WQEAppClient : NSObject
{
    NSDictionary *permissions;	// 8 = 0x8
    NSString *_userId;	// 16 = 0x10
    NSString *_companyId;	// 24 = 0x18
    WQEAppEntity *_app;	// 32 = 0x20
    WQAuth *_appAuth;	// 40 = 0x28
}

+ (void)clearAllClient;
+ (id)getClient:(id)arg1;
+ (void)unregisterClient:(id)arg1;
+ (void)registerClient:(id)arg1 client:(id)arg2;
@property(retain, nonatomic) WQAuth *appAuth; // @synthesize appAuth=_appAuth;
@property(retain, nonatomic) WQEAppEntity *app; // @synthesize app=_app;
@property(retain, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSDictionary *permissions; // @synthesize permissions;
- (void).cxx_destruct;
- (id)getHttpCallUrl:(id)arg1 withParams:(id)arg2;
- (id)getCallbackForWeb;
- (void)addPermission:(id)arg1;
- (_Bool)hasPermission:(id)arg1;
- (id)initWithApp:(id)arg1 userId:(id)arg2 companyId:(id)arg3;

@end
