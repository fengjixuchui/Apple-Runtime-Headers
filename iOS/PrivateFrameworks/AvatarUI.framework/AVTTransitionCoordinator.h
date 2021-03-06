//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AVTTransitionScheduler;

@interface AVTTransitionCoordinator : NSObject
{
    double _delay;
    id <AVTTransitionScheduler> _scheduler;
    NSMutableArray *_pendingTransitions;
    NSMutableArray *_runningTransitions;
}

+ (CDUnknownBlockType)eventHandlerForCoordinator:(id)arg1;
+ (id)concurrentTransitionCoordinatorWithDelay:(double)arg1;
+ (id)synchronousTransitionCoordinator;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *runningTransitions; // @synthesize runningTransitions=_runningTransitions;
@property(readonly, nonatomic) NSMutableArray *pendingTransitions; // @synthesize pendingTransitions=_pendingTransitions;
@property(retain, nonatomic) id <AVTTransitionScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void)cancelAllTransitions;
- (void)cancelTransitionsMatchingModel:(id)arg1;
- (id)allTransitions;
- (id)transitionsMatchingModel:(id)arg1;
- (void)startNextTransition;
- (void)didCompleteRunningTransition:(id)arg1;
- (void)addTransition:(id)arg1;
- (void)dealloc;
- (id)init;

@end

