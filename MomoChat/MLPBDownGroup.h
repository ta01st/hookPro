//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface MLPBDownGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMomoid; // @dynamic hasMomoid;
@property(nonatomic) _Bool hasMsgid; // @dynamic hasMsgid;
@property(nonatomic) _Bool hasNick; // @dynamic hasNick;
@property(nonatomic) _Bool hasRoomid; // @dynamic hasRoomid;
@property(nonatomic) _Bool hasV; // @dynamic hasV;
@property(copy, nonatomic) NSString *momoid; // @dynamic momoid;
@property(copy, nonatomic) NSString *msgid; // @dynamic msgid;
@property(copy, nonatomic) NSString *nick; // @dynamic nick;
@property(copy, nonatomic) NSString *roomid; // @dynamic roomid;
@property(retain, nonatomic) NSMutableArray *unitsArray; // @dynamic unitsArray;
@property(readonly, nonatomic) unsigned long long unitsArray_Count; // @dynamic unitsArray_Count;
@property(copy, nonatomic) NSString *v; // @dynamic v;

@end

