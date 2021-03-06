//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HomePageChannelFreeChoice.h"

@class HomePageChannelAction, HomePageChannelJumpModel, HomePageChannelNSelectNFloorModel, NSArray, NSString, NSURL;

@interface HomePageChannelNSelectNModel : NSObject <HomePageChannelFreeChoice>
{
    HomePageChannelNSelectNFloorModel *_floor;
    NSString *_slogan;
    NSString *_img;
    NSArray *_imgList;
    HomePageChannelJumpModel *_jump;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) HomePageChannelJumpModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) NSArray *imgList; // @synthesize imgList=_imgList;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(nonatomic) __weak HomePageChannelNSelectNFloorModel *floor; // @synthesize floor=_floor;
- (void).cxx_destruct;
@property(readonly, nonatomic) HomePageChannelAction *viewFreeChoiceDetailsAction;
@property(readonly, nonatomic) NSURL *freeChoiceItem4ImageURL;
@property(readonly, nonatomic) NSURL *freeChoiceItem3ImageURL;
@property(readonly, nonatomic) NSURL *freeChoiceItem2ImageURL;
@property(readonly, nonatomic) NSURL *freeChoiceItem1ImageURL;
@property(readonly, nonatomic) NSString *freeChoiceSubtitle;
@property(readonly, nonatomic) NSURL *freeChoiceImageURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

