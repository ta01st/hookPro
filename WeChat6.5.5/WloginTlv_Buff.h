//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface WloginTlv_Buff : WloginTlv
{
    NSData *acSigBuff;
}

@property(retain) NSData *acSigBuff; // @synthesize acSigBuff;
- (id)copy;
- (void)dealloc;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

