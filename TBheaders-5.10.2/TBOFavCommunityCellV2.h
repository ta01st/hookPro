//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class NSString, TBOMyCommunitiesView;

@interface TBOFavCommunityCellV2 : TBOBaseCell
{
    TBOMyCommunitiesView *_communitiesView;	// 8 = 0x8
    NSString *_bucket;	// 16 = 0x10
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) TBOMyCommunitiesView *communitiesView; // @synthesize communitiesView=_communitiesView;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

