//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface TBDetailUICopyLabel : UILabel
{
    NSString *_textL;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *textL; // @synthesize textL=_textL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTap:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)attachTapHandler;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;

@end

