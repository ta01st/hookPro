//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMMessageAMP.h"

#import "TBIMTextMessage-Protocol.h"

@class NSString;

@interface TBIMMessageAMPText : TBIMMessageAMP <TBIMTextMessage>
{
}

- (id)accessibleLabel;
- (void)setAttributedContent:(id)arg1;
- (id)attributedContent;
- (void)setTextSize:(struct CGSize)arg1;
- (struct CGSize)textSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
