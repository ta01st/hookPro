//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchSortbarItem.h"

@class NSDictionary, NXView, TBXSearchNXComponent;

@interface TBXSearchSortbarItemActFilter : TBXSearchSortbarItem
{
    _Bool _itemSelected;	// 8 = 0x8
    NXView *_itemView;	// 16 = 0x10
    NSDictionary *_actFilterData;	// 24 = 0x18
    TBXSearchNXComponent *_nxComponent;	// 32 = 0x20
}

@property(retain, nonatomic) TBXSearchNXComponent *nxComponent; // @synthesize nxComponent=_nxComponent;
@property(retain, nonatomic) NSDictionary *actFilterData; // @synthesize actFilterData=_actFilterData;
@property(nonatomic) _Bool itemSelected; // @synthesize itemSelected=_itemSelected;
@property(retain, nonatomic) NXView *itemView; // @synthesize itemView=_itemView;
- (void).cxx_destruct;
- (void)setItemSelectedStatus:(_Bool)arg1;
- (void)onItemClick:(id)arg1;
- (id)getInitItemView;
- (id)initWithData:(id)arg1;

@end
