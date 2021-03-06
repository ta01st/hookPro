//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDVideoAVEffectBaseTemplateProtocol.h"

@class AVMutableComposition, AVMutableVideoComposition, AVMutableVideoCompositionInstruction, NSString;

@interface MDVideoAVEffectBaseTemplate : NSObject <MDVideoAVEffectBaseTemplateProtocol>
{
    AVMutableComposition *_composition;
    AVMutableVideoComposition *_videoCompostion;
    AVMutableVideoCompositionInstruction *_videoCompositionInstruction;
    struct CGSize _videoSize;
    CDStruct_1b6d18a9 _videoduration;
}

@property(retain, nonatomic) AVMutableVideoCompositionInstruction *videoCompositionInstruction; // @synthesize videoCompositionInstruction=_videoCompositionInstruction;
@property(retain, nonatomic) AVMutableVideoComposition *videoCompostion; // @synthesize videoCompostion=_videoCompostion;
@property(retain, nonatomic) AVMutableComposition *composition; // @synthesize composition=_composition;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) CDStruct_1b6d18a9 videoduration; // @synthesize videoduration=_videoduration;
- (void)activateEffect;
- (void)composeEffectWithLayers:(id)arg1;
- (id)initWithVideoDuration:(CDStruct_1b6d18a9)arg1 videoSize:(struct CGSize)arg2 composition:(id)arg3 videoComposition:(id)arg4 videoCompositionInstruction:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

