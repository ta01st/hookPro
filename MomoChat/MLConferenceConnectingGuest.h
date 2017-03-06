//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface MLConferenceConnectingGuest : NSObject
{
    _Bool _statusLock;
    _Bool _isMediaClosed;
    _Bool _isAPIClosed;
    NSString *_momoid;
    NSString *_sdkId;
    NSString *_nickname;
    unsigned long long _charmLevel;
    unsigned long long _fortuneLevel;
    unsigned long long _starThumbs;
    NSArray *_rankingPhotoArray;
    unsigned long long _slaveLiveStatus;
    NSString *_avatarID;
    id <MLConferenceConnectingGuestDelgate> _delegate;
    long long _status;
    NSString *_connectingVersion;
    NSDate *_startTime;
    NSString *_currentRoomid;
}

@property(copy, nonatomic) NSString *currentRoomid; // @synthesize currentRoomid=_currentRoomid;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isAPIClosed; // @synthesize isAPIClosed=_isAPIClosed;
@property(nonatomic) _Bool isMediaClosed; // @synthesize isMediaClosed=_isMediaClosed;
@property(copy, nonatomic) NSString *connectingVersion; // @synthesize connectingVersion=_connectingVersion;
@property(nonatomic, getter=isLocked) _Bool statusLock; // @synthesize statusLock=_statusLock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <MLConferenceConnectingGuestDelgate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *avatarID; // @synthesize avatarID=_avatarID;
@property(nonatomic) unsigned long long slaveLiveStatus; // @synthesize slaveLiveStatus=_slaveLiveStatus;
@property(copy, nonatomic) NSArray *rankingPhotoArray; // @synthesize rankingPhotoArray=_rankingPhotoArray;
@property(nonatomic) unsigned long long starThumbs; // @synthesize starThumbs=_starThumbs;
@property(nonatomic) unsigned long long fortuneLevel; // @synthesize fortuneLevel=_fortuneLevel;
@property(nonatomic) unsigned long long charmLevel; // @synthesize charmLevel=_charmLevel;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *sdkId; // @synthesize sdkId=_sdkId;
@property(copy, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)updateStatusForCloseFlag;
- (id)initWithMomoid:(id)arg1;

@end
