//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString, NSString<Optional>;

@interface JDVDanmuUpAuthBody : JSONModel
{
    NSString<Optional> *token;
    NSString *clientVersion;
    NSString *clientType;
    NSString *clientKind;
    NSString *present;
    NSString *os;
    NSString *netType;
}

@property(retain, nonatomic) NSString *netType; // @synthesize netType;
@property(retain, nonatomic) NSString *os; // @synthesize os;
@property(retain, nonatomic) NSString *present; // @synthesize present;
@property(retain, nonatomic) NSString *clientKind; // @synthesize clientKind;
@property(retain, nonatomic) NSString *clientType; // @synthesize clientType;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion;
@property(retain, nonatomic) NSString<Optional> *token; // @synthesize token;
- (void).cxx_destruct;
- (id)init;

@end

