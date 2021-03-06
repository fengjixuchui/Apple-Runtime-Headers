//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior
{
    struct CGPoint _anchorPoint;
    float _damping;
    float _distance;
    float _frequency;
    struct {
        unsigned int attachedToView:1;
        unsigned int dampingSet:1;
        unsigned int frequencySet:1;
        unsigned int lengthSet:1;
    } _stateFlags;
    NSMutableArray *_joints;
    PKPhysicsBody *_anchorBody;
}

+ (_Bool)_isPrimitiveBehavior;
- (void).cxx_destruct;
@property(nonatomic) float damping; // @synthesize damping=_damping;
- (id)description;
- (void)_dissociate;
- (void)_associate;
@property(nonatomic) struct CGPoint snapPoint;
- (void)_setFrequency:(float)arg1;
- (float)_frequency;
- (void)_setDistance:(float)arg1;
- (float)_distance;
- (id)initWithItem:(id)arg1 snapToPoint:(struct CGPoint)arg2;
- (id)init;

@end

