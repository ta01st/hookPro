//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSRecursiveLock;

@interface ACDSDynamicProxy : NSProxy
{
    _Bool _instanceMethod;	// 8 = 0x8
    _Bool _validate;	// 9 = 0x9
    Class _proxy;	// 16 = 0x10
    id _proxyInstance;	// 24 = 0x18
    NSRecursiveLock *_recursiveLock;	// 32 = 0x20
}

+ (_Bool)respondsToSelector:(SEL)arg1;
+ (id)instance:(Class)arg1;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(nonatomic) _Bool validate; // @synthesize validate=_validate;
@property(nonatomic) _Bool instanceMethod; // @synthesize instanceMethod=_instanceMethod;
@property(retain, nonatomic) id proxyInstance; // @synthesize proxyInstance=_proxyInstance;
@property(retain, nonatomic) Class proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;

@end
