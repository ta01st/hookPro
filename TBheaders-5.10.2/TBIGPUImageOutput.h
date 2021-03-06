//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBIGPUImageOutput : NSObject
{
    NSMutableArray *targets;	// 8 = 0x8
    NSMutableArray *targetTextureIndices;	// 16 = 0x10
    unsigned int outputTexture;	// 24 = 0x18
    struct CGSize inputTextureSize;	// 32 = 0x20
    struct CGSize cachedMaximumOutputSize;	// 48 = 0x30
    _Bool _shouldSmoothlyScaleOutput;	// 64 = 0x40
}

@property(nonatomic) _Bool shouldSmoothlyScaleOutput; // @synthesize shouldSmoothlyScaleOutput=_shouldSmoothlyScaleOutput;
- (void).cxx_destruct;
- (void)deleteOutputTexture;
- (void)initializeOutputTexture;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)dealloc;
- (id)init;

@end

