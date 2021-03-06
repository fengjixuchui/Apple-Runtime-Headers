//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI2/NSObject-Protocol.h>

@class FCIssueReadingHistory, FCKeyValueStore, FCNetworkBehaviorMonitor, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;
@protocol FCPushNotificationHandling;

@protocol FCPrivateDataContext <NSObject>
- (FCKeyValueStore *)privateStoreWithName:(NSString *)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@property(nonatomic, readonly) NSString *privateDataDirectory;
- (BOOL)isPrivateDataSyncingEnabled;
@property(nonatomic, readonly) id <FCPushNotificationHandling> privatePushNotificationHandler;
@property(nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property(nonatomic, readonly) FCTagSettings *tagSettings;
@property(nonatomic, readonly) FCUserInfo *userInfo;
@property(nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property(nonatomic, readonly) FCReadingList *readingList;
@property(nonatomic, readonly) FCReadingHistory *readingHistory;
@property(nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property(nonatomic, readonly) FCPersonalizationData *personalizationData;
@property(nonatomic, readonly) FCIssueReadingHistory *issueReadingHistory;

// Remaining properties
@property(nonatomic, readonly) BOOL privateDataSyncingEnabled;
@end

