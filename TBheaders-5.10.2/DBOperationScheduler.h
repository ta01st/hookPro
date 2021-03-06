//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DBConnectionPool, DBOpertaionQueue, ThreadPoolManager;

@interface DBOperationScheduler : NSObject
{
    DBOpertaionQueue *_pendingQueue;	// 8 = 0x8
    DBOpertaionQueue *_workingQueue;	// 16 = 0x10
    int _status;	// 24 = 0x18
    ThreadPoolManager *_threadPoolManager;	// 32 = 0x20
    DBConnectionPool *_connectionPool;	// 40 = 0x28
    _Bool _needTrascationCheck;	// 48 = 0x30
}

@property(nonatomic) _Bool needTrascationCheck; // @synthesize needTrascationCheck=_needTrascationCheck;
@property(nonatomic) __weak DBConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)operationCallback:(id)arg1;
- (void)submitOperation:(id)arg1 inConnection:(id)arg2;
- (void)scheduleOperation;
- (void)addOperation:(id)arg1;
- (id)initWithConnectionPool:(id)arg1;

@end

