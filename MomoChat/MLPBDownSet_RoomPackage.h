//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLPBDownSet_RoomPackage_Item;

@interface MLPBDownSet_RoomPackage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLeftPackage; // @dynamic hasLeftPackage;
@property(nonatomic) _Bool hasRightPackage; // @dynamic hasRightPackage;
@property(retain, nonatomic) MLPBDownSet_RoomPackage_Item *leftPackage; // @dynamic leftPackage;
@property(retain, nonatomic) MLPBDownSet_RoomPackage_Item *rightPackage; // @dynamic rightPackage;

@end
