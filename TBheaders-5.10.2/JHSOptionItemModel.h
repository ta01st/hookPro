//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSJSONModel.h"

@class NSDictionary;

@interface JHSOptionItemModel : JHSJSONModel
{
    int _modelType;	// 8 = 0x8
    NSDictionary *_trackParams;	// 16 = 0x10
}

+ (id)modelWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)typeToClassMapping;
+ (id)mixTypeToTypeMapping;
@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;

@end
