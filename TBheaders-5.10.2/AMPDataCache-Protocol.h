//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol AMPDataCacheDelegate, AMPDataGroup;

@protocol AMPDataCache <NSObject>
@property(nonatomic) __weak id <AMPDataCacheDelegate> delegate;
- (void)removeDataGroupForName:(NSString *)arg1;
- (id <AMPDataGroup>)dataGroupForName:(NSString *)arg1;
- (void)setDataGroup:(id <AMPDataGroup>)arg1 forName:(NSString *)arg2;
- (void)reset;
@end
