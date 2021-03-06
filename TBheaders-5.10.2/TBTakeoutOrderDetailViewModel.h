//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, NSMutableArray, NSString, TBTakeoutOrderDetailContactViewModel, TBTakeoutOrderDetailFeeViewModel, TBTakeoutOrderDetailFooterViewModel, TBTakeoutOrderDetailModel, TBTakeoutOrderDetailRiderViewModel, TBTakeoutOrderDetailStoreViewModel, TBTakeoutOrderDetailTradeViewModel, TBTakeoutOrderServiceAddressViewModel;

@interface TBTakeoutOrderDetailViewModel : TBTakeoutNewViewModel
{
    _Bool _showRiderMap;	// 8 = 0x8
    NSString *_createTime;	// 16 = 0x10
    NSString *_payTime;	// 24 = 0x18
    NSString *_acceptTime;	// 32 = 0x20
    NSString *_finishTime;	// 40 = 0x28
    NSString *_autoConfirmTime;	// 48 = 0x30
    long long _statusInterval;	// 56 = 0x38
    NSString *_orderId;	// 64 = 0x40
    NSString *_deliveryTime;	// 72 = 0x48
    TBTakeoutOrderDetailRiderViewModel *_riderViewModel;	// 80 = 0x50
    TBTakeoutOrderDetailTradeViewModel *_tradeViewModel;	// 88 = 0x58
    TBTakeoutOrderDetailStoreViewModel *_storeViewModel;	// 96 = 0x60
    NSArray *_itemViewModels;	// 104 = 0x68
    TBTakeoutOrderDetailFeeViewModel *_feeViewModel;	// 112 = 0x70
    TBTakeoutOrderDetailContactViewModel *_contactViewModel;	// 120 = 0x78
    TBTakeoutOrderServiceAddressViewModel *_serviceViewModel;	// 128 = 0x80
    TBTakeoutOrderDetailFooterViewModel *_footerViewModel;	// 136 = 0x88
    long long _riderStatus;	// 144 = 0x90
    TBTakeoutOrderDetailModel *_model;	// 152 = 0x98
    NSMutableArray *_processList;	// 160 = 0xa0
    unsigned long long _dataGroupCount;	// 168 = 0xa8
    NSMutableArray *_dataList;	// 176 = 0xb0
    NSMutableArray *_itemList;	// 184 = 0xb8
}

@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) unsigned long long dataGroupCount; // @synthesize dataGroupCount=_dataGroupCount;
@property(retain, nonatomic) NSMutableArray *processList; // @synthesize processList=_processList;
@property(retain, nonatomic) TBTakeoutOrderDetailModel *model; // @synthesize model=_model;
@property(nonatomic) long long riderStatus; // @synthesize riderStatus=_riderStatus;
@property(retain, nonatomic) TBTakeoutOrderDetailFooterViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(retain, nonatomic) TBTakeoutOrderServiceAddressViewModel *serviceViewModel; // @synthesize serviceViewModel=_serviceViewModel;
@property(retain, nonatomic) TBTakeoutOrderDetailContactViewModel *contactViewModel; // @synthesize contactViewModel=_contactViewModel;
@property(retain, nonatomic) TBTakeoutOrderDetailFeeViewModel *feeViewModel; // @synthesize feeViewModel=_feeViewModel;
@property(copy, nonatomic) NSArray *itemViewModels; // @synthesize itemViewModels=_itemViewModels;
@property(retain, nonatomic) TBTakeoutOrderDetailStoreViewModel *storeViewModel; // @synthesize storeViewModel=_storeViewModel;
@property(retain, nonatomic) TBTakeoutOrderDetailTradeViewModel *tradeViewModel; // @synthesize tradeViewModel=_tradeViewModel;
@property(retain, nonatomic) TBTakeoutOrderDetailRiderViewModel *riderViewModel; // @synthesize riderViewModel=_riderViewModel;
@property(nonatomic) _Bool showRiderMap; // @synthesize showRiderMap=_showRiderMap;
@property(readonly, copy, nonatomic) NSString *deliveryTime; // @synthesize deliveryTime=_deliveryTime;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long statusInterval; // @synthesize statusInterval=_statusInterval;
@property(copy, nonatomic) NSString *autoConfirmTime; // @synthesize autoConfirmTime=_autoConfirmTime;
@property(copy, nonatomic) NSString *finishTime; // @synthesize finishTime=_finishTime;
@property(copy, nonatomic) NSString *acceptTime; // @synthesize acceptTime=_acceptTime;
@property(copy, nonatomic) NSString *payTime; // @synthesize payTime=_payTime;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *subViewModels;
- (id)orderProcessList;
@property(readonly, copy, nonatomic) NSString *statusDesc;
@property(readonly, copy, nonatomic) NSString *processNodeId;
@property(readonly, copy, nonatomic) NSString *status;
@property(readonly, nonatomic) _Bool payOnDelivery;
@property(readonly, nonatomic) long long appointOrderId;
@property(readonly, copy, nonatomic) NSString *outOrderId;
- (void)clear;
- (void)parseResult:(id)arg1;
- (id)serviceApi;

@end

