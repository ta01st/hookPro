//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface APHTTPCookie : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
}

+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)copy;
- (id)requestHeaderField;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)path;
- (id)value;
- (id)name;
- (id)expiresDate;
- (id)domain;
- (id)initWithProperties:(id)arg1;

@end

