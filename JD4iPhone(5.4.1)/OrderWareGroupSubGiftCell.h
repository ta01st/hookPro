//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrderWareGroupCell.h"

@class OrderListWareModel, OrderWareGroupItemView;

@interface OrderWareGroupSubGiftCell : OrderWareGroupCell
{
    OrderListWareModel *_wareModel;
    OrderWareGroupItemView *_smallItemView;
}

@property(retain, nonatomic) OrderWareGroupItemView *smallItemView; // @synthesize smallItemView=_smallItemView;
@property(retain, nonatomic) OrderListWareModel *wareModel; // @synthesize wareModel=_wareModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
