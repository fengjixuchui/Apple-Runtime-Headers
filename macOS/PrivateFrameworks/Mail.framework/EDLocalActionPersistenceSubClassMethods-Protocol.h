//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class NSArray, NSURL;
@protocol ECMessage;

@protocol EDLocalActionPersistenceSubClassMethods <NSObject>
- (void)handledFailedCopyForMessages:(NSArray *)arg1;
- (BOOL)moveSupportedFromMailboxURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (long long)mailboxDatabaseIDForURL:(NSURL *)arg1;
- (NSURL *)mailboxURLForDatabaseID:(long long)arg1;
- (id <ECMessage>)messageForDatabaseID:(long long)arg1;
@end

