//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDStoreNetwork;

@interface FilterManager : NSObject
{
    JDStoreNetwork *network_;
}

+ (id)sharedFilterManager;
- (void).cxx_destruct;
- (void)requestNewFilterDataWithFunctionId:(id)arg1 FilterService:(id)arg2 popBack:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)gennerateSearchFilterDataWithHotTags:(id)arg1 dataList:(id)arg2 allItemsModel:(id)arg3 priceModel:(id)arg4;
- (id)getNewFilterStrAndServiceDic:(id)arg1 priceModel:(id)arg2;
- (id)gennerateSearchFilterDataWithHotTags:(id)arg1 dataList:(id)arg2 allItemsModel:(id)arg3;
- (id)getNewFilterStrAndServiceDic:(id)arg1;
- (id)gennerateAllItemsDataFromCom:(_Bool)arg1 allItemsModel:(id)arg2;
- (void)filterManagerCancel;
- (void)dealloc;
- (id)init;

@end

