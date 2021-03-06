//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHaptics/CHHapticPatternPlayer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PatternPlayer : NSObject <CHHapticPatternPlayer>
{
}

@property BOOL isMuted;
- (BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (BOOL)cancelAndReturnError:(id *)arg1;
- (BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (BOOL)stopAtTime:(double)arg1 error:(id *)arg2;
- (BOOL)startAtTime:(double)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 error:(id *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

