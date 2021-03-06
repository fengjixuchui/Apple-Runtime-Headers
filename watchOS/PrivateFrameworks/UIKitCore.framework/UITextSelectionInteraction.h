//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

@class NSNumber, UITextGestureTuning, UITextSelectionGrabberSuppressionAssertion, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction
{
    double _lastTapTimestamp;
    struct CGPoint _lastTapLocation;
    int _previousRepeatedGranularity;
    UITextGestureTuning *_gestureTuning;
    _Bool _indirectSelectionType;
    struct CGRect _originalCaretRect;
    _Bool _wasOriginallyFirstResponder;
    NSNumber *_granularityToHandOff;
    _UIKeyboardTextSelectionController *_activeSelectionController;
    UITextSelectionGrabberSuppressionAssertion *_grabberSuppressionAssertion;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)_createGestureTuningIfNecessary;
- (void)confirmMarkedText:(id)arg1;
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint)arg1;
- (void)didUpdateSelectionWithGesture:(id)arg1;
- (void)willUpdateSelectionWithGesture:(id)arg1;
- (void)_handleMultiTapGesture:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;
- (int)_textGranularityForNumberOfTaps:(unsigned int)arg1;
- (id)handOffGranularity;
- (int)_textGranularityForRepeatedTap:(int)arg1;
- (_Bool)_isRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;
- (_Bool)_isWithinRepeatedTapTimeForTouch:(id)arg1;
- (_Bool)_isNowWithinRepeatedTapTime;
- (_Bool)_isShiftKeyBeingHeldForGesture:(id)arg1;
- (_Bool)_usesIndirectSelectionBehavior;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1;
- (void)toggleSelectionCommands;
- (void)_applyTransientState:(id)arg1;
- (id)_transientState;
- (void)didMoveToView:(id)arg1;
- (void)finishSetup;
- (id)initWithMode:(int)arg1 indirect:(_Bool)arg2;
- (id)initWithMode:(int)arg1;

@end

