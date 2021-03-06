//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface AKCoordinatedDataBlock : NSObject
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _completionHandler;
    _Bool _started;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)startCoordinatingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_callCompletionWithData:(id)arg1 error:(id)arg2;
- (void)_start;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

