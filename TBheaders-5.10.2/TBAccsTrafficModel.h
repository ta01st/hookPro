//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TBAccsTrafficModel : NSObject
{
    NSDate *_date;	// 8 = 0x8
    NSString *_bizId;	// 16 = 0x10
    NSString *_host;	// 24 = 0x18
    double _size;	// 32 = 0x20
}

@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDict;

@end

