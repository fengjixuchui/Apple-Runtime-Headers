//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@protocol NCNotificationListCoalescingControlsHandler <NSObject>
@property(nonatomic) __weak id <NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;
- (_Bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)resetClearButtonStateAnimated:(_Bool)arg1;
@end

