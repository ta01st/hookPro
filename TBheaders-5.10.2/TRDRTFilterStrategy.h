//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TRDRTFilterStrategy : NSObject
{
    NSArray *_module;	// 8 = 0x8
    NSArray *_network;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *network; // @synthesize network=_network;
@property(retain, nonatomic) NSArray *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)updateFilterStrategy:(id)arg1;
- (id)initWithJson:(id)arg1;
- (id)init;

@end

