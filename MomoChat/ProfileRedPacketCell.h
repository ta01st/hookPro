//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalProfileCell.h"

@class UIImageView, UILabel;

@interface ProfileRedPacketCell : PersonalProfileCell
{
    UILabel *_packetLabel1;
    UILabel *_packetLabel2;
    UIImageView *_bgLineView;
}

@property(retain, nonatomic) UIImageView *bgLineView; // @synthesize bgLineView=_bgLineView;
@property(retain, nonatomic) UILabel *packetLabel2; // @synthesize packetLabel2=_packetLabel2;
@property(retain, nonatomic) UILabel *packetLabel1; // @synthesize packetLabel1=_packetLabel1;
- (void)refreshCellWithRedPacketList:(id)arg1;
- (void)dealloc;

@end

