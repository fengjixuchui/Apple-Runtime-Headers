//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/HUTriggerActionBuilderEditorDelegate-Protocol.h>
#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface WFHomeAccessoryPickerParameterSummaryEditor : WFModuleSummaryEditor <HUTriggerActionBuilderEditorDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)actionBuilderEditor:(id)arg1 didFinishWithTriggerActionSetBuilder:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

