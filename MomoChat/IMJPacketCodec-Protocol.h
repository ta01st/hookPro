//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMJBytePacket, MFIMJPacket, NSData;

@protocol IMJPacketCodec <NSObject>
- (MFIMJPacket *)decode:(NSData *)arg1;
- (IMJBytePacket *)encode:(MFIMJPacket *)arg1;
@end

