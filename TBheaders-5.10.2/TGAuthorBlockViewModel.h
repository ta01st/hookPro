//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGCollectionBlockViewModel.h"

@class NSString, TGDetailPageModel;

@interface TGAuthorBlockViewModel : TGCollectionBlockViewModel
{
    _Bool _follow;	// 8 = 0x8
    _Bool _shouldShowFollowButton;	// 9 = 0x9
    int _uType;	// 12 = 0xc
    TGDetailPageModel *_pageModel;	// 16 = 0x10
    NSString *_avatarUrl;	// 24 = 0x18
    NSString *_nickName;	// 32 = 0x20
    NSString *_streetName;	// 40 = 0x28
    NSString *_careerName;	// 48 = 0x30
    NSString *_browseNumber;	// 56 = 0x38
    NSString *_contentDesc;	// 64 = 0x40
    NSString *_location;	// 72 = 0x48
    NSString *_productNumber;	// 80 = 0x50
    NSString *_publishTime;	// 88 = 0x58
    long long _groupId;	// 96 = 0x60
    long long _userId;	// 104 = 0x68
    NSString *_skill;	// 112 = 0x70
    long long _loginUserId;	// 120 = 0x78
}

@property(nonatomic) long long loginUserId; // @synthesize loginUserId=_loginUserId;
@property(copy, nonatomic) NSString *skill; // @synthesize skill=_skill;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) _Bool shouldShowFollowButton; // @synthesize shouldShowFollowButton=_shouldShowFollowButton;
@property(readonly, nonatomic) NSString *publishTime; // @synthesize publishTime=_publishTime;
@property(readonly, nonatomic) NSString *productNumber; // @synthesize productNumber=_productNumber;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *contentDesc; // @synthesize contentDesc=_contentDesc;
@property(readonly, nonatomic) NSString *browseNumber; // @synthesize browseNumber=_browseNumber;
@property(readonly, nonatomic) NSString *careerName; // @synthesize careerName=_careerName;
@property(readonly, nonatomic) NSString *streetName; // @synthesize streetName=_streetName;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) _Bool follow; // @synthesize follow=_follow;
@property(nonatomic) int uType; // @synthesize uType=_uType;
@property(readonly, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) TGDetailPageModel *pageModel; // @synthesize pageModel=_pageModel;
- (void).cxx_destruct;
- (void)synProperiesWithDetailPageModel:(id)arg1;
- (id)initWithDetailPageModel:(id)arg1;

@end

