//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDCPAUtil : NSObject
{
}

+ (_Bool)validateData:(id)arg1;
+ (_Bool)validateDicitonary:(id)arg1;
+ (_Bool)validateString:(id)arg1;
+ (_Bool)validateSignDictionary:(id)arg1;
+ (id)rsaDictionaryFromFunctionId:(id)arg1 body:(id)arg2 client:(id)arg3 clientVersion:(id)arg4 openudid:(id)arg5;
+ (id)rsaDictionaryFromFunctionId:(id)arg1 body:(id)arg2 openudid:(id)arg3;
+ (id)dictionaryFromData:(id)arg1 options:(unsigned long long)arg2;
+ (id)dictionaryFromData:(id)arg1;
+ (id)jsonFromDictionary:(id)arg1 options:(unsigned long long)arg2;
+ (id)jsonFromDictionary:(id)arg1;
+ (id)dataFromDictionary:(id)arg1 options:(unsigned long long)arg2;
+ (id)dataFromDictionary:(id)arg1;

@end

