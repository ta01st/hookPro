//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDSHAppSearchUserHistoryInsertionHelper : NSObject
{
}

+ (id)sharedThumbnailData;
+ (id)sharedFaxianzixunImageData;
+ (id)sharedFaxianqingdanImageData;
+ (id)sharedHaodongxiImageData;
+ (void)fetchV3Data;
+ (void)processJump:(id)arg1;
+ (void)deleteV3Domains;
+ (void)privateDeleteWithDomains:(id)arg1;
+ (void)insertItems:(id)arg1;
+ (void)insertSingleItem:(id)arg1;
+ (id)uidString:(id)arg1 withDomainString:(id)arg2 titleString:(id)arg3;
+ (id)p_secondParameterFromUidString:(id)arg1;
+ (id)p_firstParameterFromUidString:(id)arg1;
+ (id)p_domainStringFromUidString:(id)arg1;

@end
