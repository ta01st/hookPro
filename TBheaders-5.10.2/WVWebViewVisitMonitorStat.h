//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVMonitorInfoProtocol-Protocol.h"

@class NSString;

@interface WVWebViewVisitMonitorStat : NSObject <WVMonitorInfoProtocol>
{
    double _sumTime;	// 8 = 0x8
    long long _startupCount;	// 16 = 0x10
}

+ (id)monitorMeasureRange:(id)arg1;
+ (id)monitorPoint;
@property(readonly, nonatomic) long long startupCount; // @synthesize startupCount=_startupCount;
@property(readonly, nonatomic) double sumTime; // @synthesize sumTime=_sumTime;
@property(readonly, nonatomic) double avgTime;
- (id)initWithSumTime:(double)arg1 withStartupCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
