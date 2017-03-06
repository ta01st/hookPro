//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EZOutputDataSource-Protocol.h"
#import "EZOutputDelegate-Protocol.h"

@class EZOutput, NSMutableArray, NSString;

@interface TCCorePlayer : NSObject <EZOutputDataSource, EZOutputDelegate>
{
    _Bool _appendWakeFrame;	// 8 = 0x8
    _Bool _wakeFrameRemoved;	// 9 = 0x9
    _Bool _state;	// 10 = 0xa
    int _sampleNum;	// 12 = 0xc
    EZOutput *_output;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    double _amplitude;	// 32 = 0x20
    double _frequency;	// 40 = 0x28
    double _sampleRate;	// 48 = 0x30
    double _step;	// 56 = 0x38
    double _theta;	// 64 = 0x40
    unsigned long long _codeLen;	// 72 = 0x48
    unsigned long long _codeIndex;	// 80 = 0x50
    NSMutableArray *_codeFreuency;	// 88 = 0x58
}

+ (id)sharedOutput;
@property _Bool state; // @synthesize state=_state;
@property(nonatomic) _Bool wakeFrameRemoved; // @synthesize wakeFrameRemoved=_wakeFrameRemoved;
@property(nonatomic) _Bool appendWakeFrame; // @synthesize appendWakeFrame=_appendWakeFrame;
@property(nonatomic) int sampleNum; // @synthesize sampleNum=_sampleNum;
@property(retain, nonatomic) NSMutableArray *codeFreuency; // @synthesize codeFreuency=_codeFreuency;
@property(nonatomic) unsigned long long codeIndex; // @synthesize codeIndex=_codeIndex;
@property(nonatomic) unsigned long long codeLen; // @synthesize codeLen=_codeLen;
@property(nonatomic) double theta; // @synthesize theta=_theta;
@property(nonatomic) double step; // @synthesize step=_step;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) EZOutput *output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)output:(id)arg1 playedAudio:(float **)arg2 withBufferSize:(unsigned int)arg3 withNumberOfChannels:(unsigned int)arg4;
- (int)output:(id)arg1 shouldFillAudioBufferList:(struct AudioBufferList *)arg2 withNumberOfFrames:(unsigned int)arg3 timestamp:(const struct AudioTimeStamp *)arg4;
- (void)stopPlay;
- (void)setPlayerData:(const char *)arg1 dataLength:(int)arg2 withWakeFrame:(_Bool)arg3;
- (void)startPlay:(const char *)arg1 dataLength:(int)arg2 withWakeFrame:(_Bool)arg3;
- (void)startPlay:(const char *)arg1 dataLength:(int)arg2;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
