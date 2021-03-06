//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TBMemoryCache : NSObject <NSCoding>
{
    unsigned long long cacheCapacity;	// 8 = 0x8
    NSString *name;	// 16 = 0x10
    _Bool dataSaveToDisk;	// 24 = 0x18
    NSMutableDictionary *map;	// 32 = 0x20
    NSMutableArray *keys;	// 40 = 0x28
}

+ (id)memoryCacheFromArchivedFile:(id)arg1;
+ (id)md5HashString:(id)arg1;
+ (id)md5Hash:(id)arg1;
+ (id)cacheWithName:(id)arg1;
+ (id)cacheDataFilePathForName:(id)arg1 fileName:(id)arg2;
+ (id)cacheFilePathForName:(id)arg1;
+ (id)sharedLargeImageCache;
+ (id)sharedImageCache;
+ (id)sharedCache;
+ (void)initialize;
+ (void)clearAllMemoryCache;
@property(nonatomic) _Bool dataSaveToDisk; // @synthesize dataSaveToDisk;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void)dealloc;
- (void)saveCache:(id)arg1;
- (_Bool)save;
- (_Bool)saveToFile:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (id)allKeys;
- (void)removeAllObjects;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)addNotificationObserver;

@end

