//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLCostlyGiftTraySlot;

@protocol MLCostlyGiftTraySlotDelegate <NSObject>
- (void)costlyGiftTraySlotDidFinishPerformingComboAnimation:(MLCostlyGiftTraySlot *)arg1;
- (_Bool)costlyGiftTraySlot:(MLCostlyGiftTraySlot *)arg1 shouldPlaySoundEffectForGift:(id <MLCostlyGift>)arg2;
- (void)costlyGiftTraySlot:(MLCostlyGiftTraySlot *)arg1 trayAvatarTappedForGift:(id <MLCostlyGift>)arg2;
- (void)costlyGiftTraySlotDidFinishPerformingExlusiveAnimation:(MLCostlyGiftTraySlot *)arg1;
- (void)costlyGiftTraySlotDidBecomeIdle:(MLCostlyGiftTraySlot *)arg1;
@end
