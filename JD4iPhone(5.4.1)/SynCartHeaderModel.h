//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface SynCartHeaderModel : NSObject
{
    UIView *_headerView;
    long long _minSection;
    long long _maxSection;
    long long _originY;
}

@property(nonatomic) long long originY; // @synthesize originY=_originY;
@property(nonatomic) long long maxSection; // @synthesize maxSection=_maxSection;
@property(nonatomic) long long minSection; // @synthesize minSection=_minSection;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (_Bool)isInSection:(long long)arg1;

@end
