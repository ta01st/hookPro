//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface TPShareContent : NSObject
{
    int _backToClient;	// 8 = 0x8
    NSString *_bizId;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
    NSString *_imageUrl;	// 48 = 0x30
    UIImage *_image;	// 56 = 0x38
    NSString *_type;	// 64 = 0x40
    NSDictionary *_extendParam;	// 72 = 0x48
    NSString *_templateId;	// 80 = 0x50
    NSString *_passwordKey;	// 88 = 0x58
    NSString *_passwordType;	// 96 = 0x60
    NSString *_expireTime;	// 104 = 0x68
}

@property(retain, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *passwordKey; // @synthesize passwordKey=_passwordKey;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(nonatomic) int backToClient; // @synthesize backToClient=_backToClient;
@property(retain, nonatomic) NSDictionary *extendParam; // @synthesize extendParam=_extendParam;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (id)init;

@end
