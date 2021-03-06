//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFPasswordRemoteViewControllerDelegate-Protocol.h>
#import <SafariServices/SFQueueingServiceViewControllerProxyDelegate-Protocol.h>

@class NSString, _UIAsyncInvocation;
@protocol _SFPasswordViewControllerDelegate;

@interface _SFPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate>
{
    _UIAsyncInvocation *_cancelViewServiceRequest;
    id <_SFPasswordViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_SFPasswordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)_dismissPasswordViewController;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)_connectToService;
- (void)_setUpServiceProxyIfNeeded;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteViewController;
- (void)_addRemoteView;
- (void)_addRemoteViewAsChild;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

