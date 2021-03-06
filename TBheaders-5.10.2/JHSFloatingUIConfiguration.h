//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface JHSFloatingUIConfiguration : NSObject
{
    _Bool _show;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_animationType;	// 24 = 0x18
    NSString *_imageUrl;	// 32 = 0x20
    NSString *_actionUrl;	// 40 = 0x28
    NSArray *_timeSlot;	// 48 = 0x30
    NSArray *_weekDays;	// 56 = 0x38
    NSArray *_timeWindow;	// 64 = 0x40
    NSString *_timeZone;	// 72 = 0x48
    NSDictionary *_trackParams;	// 80 = 0x50
    struct CGSize _size;	// 88 = 0x58
}

+ (void)addLuaviewChangeBlock:(CDUnknownBlockType)arg1;
+ (void)addFloatingLayerChangeBlock:(CDUnknownBlockType)arg1;
+ (void)addSpriteChangeBlock:(CDUnknownBlockType)arg1;
+ (void)flushAll;
+ (id)allFloatingLayerConfigs;
+ (id)allSpriteConfigs;
@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSArray *timeWindow; // @synthesize timeWindow=_timeWindow;
@property(retain, nonatomic) NSArray *weekDays; // @synthesize weekDays=_weekDays;
@property(retain, nonatomic) NSArray *timeSlot; // @synthesize timeSlot=_timeSlot;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *animationType; // @synthesize animationType=_animationType;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isValidWeekDays:(id)arg1;
- (long long)minutesFromHHmm:(id)arg1;
- (_Bool)isValidTimeWindow:(id)arg1;
- (_Bool)isValidTimeSlot:(id)arg1;
- (void)mappingDictionary:(id)arg1;
- (_Bool)shouldShow;
- (id)initWithConfigDict:(id)arg1;

@end

