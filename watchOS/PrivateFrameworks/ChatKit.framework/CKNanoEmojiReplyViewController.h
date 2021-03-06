//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICQuickboardEmojiViewController.h>

#import <ChatKit/CKNanoReplyViewControllerProtocol-Protocol.h>
#import <ChatKit/PUICQuickboardTransition-Protocol.h>

@class CKNanoSendController, NSNumber, NSString;
@protocol CKNanoReplyViewControllerDismissalDelegate;

@interface CKNanoEmojiReplyViewController : PUICQuickboardEmojiViewController <PUICQuickboardTransition, CKNanoReplyViewControllerProtocol>
{
    id <CKNanoReplyViewControllerDismissalDelegate> _dismissalDelegate;
    CKNanoSendController *_sendController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKNanoSendController *sendController; // @synthesize sendController=_sendController;
@property(nonatomic) __weak id <CKNanoReplyViewControllerDismissalDelegate> dismissalDelegate; // @synthesize dismissalDelegate=_dismissalDelegate;
- (void)finishDismissalWithOptions:(unsigned int)arg1;
- (void)finishPresentationWithOptions:(unsigned int)arg1;
- (void)addPresentationAnimationsWithOptions:(unsigned int)arg1;
- (void)addDismissalAnimationsWithOptions:(unsigned int)arg1;
@property(readonly, nonatomic) double animationDuration;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initForChatController:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *breadcrumbText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) CDUnknownBlockType messageForReplyBlock;
@property(copy, nonatomic) NSNumber *messageItemListNumber;
@property(readonly) Class superclass;

@end

