//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoSettleBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoSettleBehavior : ISBehavior
{
}

- (long long)behaviorType;
- (void)_didFinish;
- (void)settle:(_Bool)arg1;

// Remaining properties
@property(nonatomic) __weak id <ISLivePhotoSettleBehaviorDelegate> delegate; // @dynamic delegate;

@end

