//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface JMPagination : NSObject
{
    unsigned long long _pageIndex;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
}

+ (id)paginationWithPageIndex:(unsigned long long)arg1 count:(unsigned long long)arg2;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)initWithPageIndex:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

