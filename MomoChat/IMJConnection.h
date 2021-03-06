//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDAsyncSocket, NSObject<OS_dispatch_queue>, NSString;

@interface IMJConnection : NSObject
{
    NSString *host;
    long long port;
    id <IMJConnectionDelegate> delegate;
    int connectionState;
    NSObject<OS_dispatch_queue> *imjQueue;
    GCDAsyncSocket *asyncSocket;
    void *IsOnImjQueueKey;
    unsigned long long _currentAuthType;
    unsigned long long _hashLength;
    unsigned long long _publicKeyLength;
    unsigned long long _signatureLength;
}

@property(nonatomic) unsigned long long signatureLength; // @synthesize signatureLength=_signatureLength;
@property(nonatomic) unsigned long long publicKeyLength; // @synthesize publicKeyLength=_publicKeyLength;
@property(nonatomic) unsigned long long hashLength; // @synthesize hashLength=_hashLength;
@property(nonatomic) unsigned long long currentAuthType; // @synthesize currentAuthType=_currentAuthType;
@property(readonly) int connectionState; // @synthesize connectionState;
@property id <IMJConnectionDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long port; // @synthesize port;
@property(retain, nonatomic) NSString *host; // @synthesize host;
- (id)imjQueue;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)continueRecvPacketWithByteLength:(unsigned long long)arg1 dataTag:(unsigned long long)arg2;
- (void)continueRecvPacket;
- (void)disconnect;
- (void)sendPacket:(id)arg1;
- (void)connect;
- (void)runBlock:(CDUnknownBlockType)arg1 sync:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

