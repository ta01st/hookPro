//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBTradeTemplateRequest : NSObject
{
    NSString *_templateId;	// 8 = 0x8
    NSString *_defaultTemplateId;	// 16 = 0x10
    NSString *_defaultTemplatePath;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *defaultTemplatePath; // @synthesize defaultTemplatePath=_defaultTemplatePath;
@property(retain, nonatomic) NSString *defaultTemplateId; // @synthesize defaultTemplateId=_defaultTemplateId;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (void).cxx_destruct;

@end

