//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/MTStateMachineEventHandler-Protocol.h>

@class NSDate;

@protocol MTBedtimeDNDStateMachineEventHandler <MTStateMachineEventHandler>
- (void)userWokeUp;
- (void)bedtimeDNDEnabled:(_Bool)arg1 userRequested:(_Bool)arg2 date:(NSDate *)arg3;
- (void)updateState:(_Bool)arg1;
@end

