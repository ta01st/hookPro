//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface OrangeIndexNamespaceModel : NSObject
{
    NSString *_loadLevel;	// 8 = 0x8
    NSString *_md5;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_resourceId;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    NSString *_version;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *loadLevel; // @synthesize loadLevel=_loadLevel;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

