//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class DEDBugSession, DEDBugSessionConfiguration;

@protocol DEDNotifier <NSObject>
- (void)cancelNotification;
- (void)scheduleNotification;
- (id)initWithConfiguration:(DEDBugSessionConfiguration *)arg1 session:(DEDBugSession *)arg2;
@end

