//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

#import "JumpToNativeModelProtocol.h"

@class NSArray, NSDictionary, NSString, ShareModel;

@interface MyJdHomeModel : JDModel <JumpToNativeModelProtocol>
{
    NSString *labelName_;
    NSString *labelImage_;
    NSString *sort_;
    NSString *next_;
    NSString *functionId_;
    NSString *action_;
    NSString *mUrl_;
    NSArray *_showItem;
    NSArray *chindItem_;
    NSString *iconNum_;
    NSString *iconStyle_;
    NSString *content_;
    NSString *_contentColor;
    _Bool _hasRedPoint;
    long long _redPointVersion;
    _Bool _canAddFile;
    int _menuType;
    NSString *_channelNum;
    NSString *_des;
    NSString *_srv;
    ShareModel *_shareModel;
    NSDictionary *_params;
}

@property(nonatomic) _Bool canAddFile; // @synthesize canAddFile=_canAddFile;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) ShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) NSString *srv; // @synthesize srv=_srv;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(nonatomic) int menuType; // @synthesize menuType=_menuType;
@property(nonatomic) long long redPointVersion; // @synthesize redPointVersion=_redPointVersion;
@property(nonatomic) _Bool hasRedpoint; // @synthesize hasRedpoint=_hasRedPoint;
@property(copy, nonatomic) NSString *channelNum; // @synthesize channelNum=_channelNum;
@property(copy, nonatomic) NSString *contentColor; // @synthesize contentColor=_contentColor;
@property(copy, nonatomic) NSString *content; // @synthesize content=content_;
@property(copy, nonatomic) NSString *iconStyle; // @synthesize iconStyle=iconStyle_;
@property(copy, nonatomic) NSString *iconNum; // @synthesize iconNum=iconNum_;
@property(retain, nonatomic) NSArray *chindItem; // @synthesize chindItem=chindItem_;
@property(retain, nonatomic) NSArray *showItem; // @synthesize showItem=_showItem;
@property(copy, nonatomic) NSString *mUrl; // @synthesize mUrl=mUrl_;
@property(copy, nonatomic) NSString *action; // @synthesize action=action_;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=functionId_;
@property(copy, nonatomic) NSString *next; // @synthesize next=next_;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=sort_;
@property(copy, nonatomic) NSString *labelImage; // @synthesize labelImage=labelImage_;
@property(copy, nonatomic) NSString *labelName; // @synthesize labelName=labelName_;
- (void)dealloc;
- (id)sortedArr:(id)arg1;
- (id)initModelDataWithDic:(id)arg1;
- (void)setDataWithDic:(id)arg1;
- (id)initModelWithDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool notAnimated;
@property(readonly) Class superclass;

@end

