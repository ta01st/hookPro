//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDCommandDelegate-Protocol.h"

@class NSDictionary, NSNumber, NSString, PDNetworkDomain;

@protocol PDNetworkCommandDelegate <PDCommandDelegate>

@optional
- (void)domain:(PDNetworkDomain *)arg1 setCacheDisabledWithCacheDisabled:(NSNumber *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDNetworkDomain *)arg1 clearBrowserCookiesWithCallback:(void (^)(id))arg2;
- (void)domain:(PDNetworkDomain *)arg1 canClearBrowserCookiesWithCallback:(void (^)(NSNumber *, id))arg2;
- (void)domain:(PDNetworkDomain *)arg1 clearBrowserCacheWithCallback:(void (^)(id))arg2;
- (void)domain:(PDNetworkDomain *)arg1 canClearBrowserCacheWithCallback:(void (^)(NSNumber *, id))arg2;
- (void)domain:(PDNetworkDomain *)arg1 getResponseBodyWithRequestId:(NSString *)arg2 callback:(void (^)(NSString *, NSNumber *, id))arg3;
- (void)domain:(PDNetworkDomain *)arg1 setExtraHTTPHeadersWithHeaders:(NSDictionary *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDNetworkDomain *)arg1 setUserAgentOverrideWithUserAgent:(NSString *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDNetworkDomain *)arg1 disableWithCallback:(void (^)(id))arg2;
- (void)domain:(PDNetworkDomain *)arg1 enableWithCallback:(void (^)(id))arg2;
@end

