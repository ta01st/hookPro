//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBSCOperationResultItem;

@interface TBSCBatOperationResultItem : TBJSONModel
{
    _Bool _isAllSuccess;	// 8 = 0x8
    _Bool _success;	// 9 = 0x9
    unsigned long long _commentId;	// 16 = 0x10
    unsigned long long _id;	// 24 = 0x18
    NSArray<TBSCOperationResultItem> *_result;	// 32 = 0x20
    unsigned long long _createrId;	// 40 = 0x28
    NSString *_commenterPic;	// 48 = 0x30
    NSString *_commenterNick;	// 56 = 0x38
    NSString *_extSymbol;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *extSymbol; // @synthesize extSymbol=_extSymbol;
@property(retain, nonatomic) NSString *commenterNick; // @synthesize commenterNick=_commenterNick;
@property(retain, nonatomic) NSString *commenterPic; // @synthesize commenterPic=_commenterPic;
@property(nonatomic) unsigned long long createrId; // @synthesize createrId=_createrId;
@property(retain, nonatomic) NSArray<TBSCOperationResultItem> *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool isAllSuccess; // @synthesize isAllSuccess=_isAllSuccess;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

