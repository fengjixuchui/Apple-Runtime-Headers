//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface EFQueueScheduler : NSObject <EFScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)performWithObject:(id)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool prefersImmediateExecution;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

