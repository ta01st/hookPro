//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer;

@interface AGERecordButton : UIButton
{
    CDUnknownBlockType _changeHandler;	// 8 = 0x8
    double _recordTime;	// 16 = 0x10
    long long _recordingStatus;	// 24 = 0x18
    CAShapeLayer *_centerLayer;	// 32 = 0x20
}

@property(retain, nonatomic) CAShapeLayer *centerLayer; // @synthesize centerLayer=_centerLayer;
@property(nonatomic) long long recordingStatus; // @synthesize recordingStatus=_recordingStatus;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)stopAnimation;
- (void)startRecordingAnimation;
- (id)squarePath;
- (void)buttonDidPress;
- (void)changeRecordingStatus:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
