//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACDSDBPerformCost, ACDSProcessResult, NSString;

@interface ACDSDBCallbackContext : NSObject
{
    _Bool _timeout;	// 8 = 0x8
    NSString *_sql;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    CDUnknownBlockType _callback;	// 32 = 0x20
    ACDSProcessResult *_result;	// 40 = 0x28
    ACDSDBPerformCost *_cost;	// 48 = 0x30
    long long _timerId;	// 56 = 0x38
}

@property _Bool timeout; // @synthesize timeout=_timeout;
@property long long timerId; // @synthesize timerId=_timerId;
@property(retain, nonatomic) ACDSDBPerformCost *cost; // @synthesize cost=_cost;
@property(retain, nonatomic) ACDSProcessResult *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
- (void).cxx_destruct;

@end

