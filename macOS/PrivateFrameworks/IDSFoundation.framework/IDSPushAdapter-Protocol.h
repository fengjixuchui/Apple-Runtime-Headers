//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class APSConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol IDSPushAdapter <NSObject>
- (APSConnection *)apsConnectionWithEnvironmentName:(NSString *)arg1 namedDelegatePort:(NSString *)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (NSString *)placeholderMachPort;
@end

