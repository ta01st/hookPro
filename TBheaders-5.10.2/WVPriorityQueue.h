//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WVPriorityQueue : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    CDUnknownBlockType _comparator;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)removeByPredicate:(CDUnknownBlockType)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

@end

