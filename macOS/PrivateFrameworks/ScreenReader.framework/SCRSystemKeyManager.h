//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCRSystemKeyManager : NSObject
{
    NSObject<OS_dispatch_queue> *_outputEventQueue;
}

- (void).cxx_destruct;
- (void)_pressSystemKeyDown:(int)arg1 keyUp:(int)arg2 keyDownFlags:(unsigned int)arg3 keyUpFlags:(unsigned int)arg4;
- (void)_pressSystemKeyDown:(int)arg1 keyUp:(int)arg2;
- (void)increaseSystemVolume;
- (void)decreaseSystemVolume;
- (id)init;

@end

