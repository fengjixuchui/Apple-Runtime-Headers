//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/MPStoreDownloadManagerObserver-Protocol.h>

@class NSMutableSet, NSString;

@interface VUIRentalManager : NSObject <MPStoreDownloadManagerObserver>
{
    _Bool _needToSendPlaybackStartDatesToServer;
    NSMutableSet *_deferredRentalCheckinContexts;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *deferredRentalCheckinContexts; // @synthesize deferredRentalCheckinContexts=_deferredRentalCheckinContexts;
@property(nonatomic) _Bool needToSendPlaybackStartDatesToServer; // @synthesize needToSendPlaybackStartDatesToServer=_needToSendPlaybackStartDatesToServer;
- (void)_didFetchInitialDownloads:(id)arg1;
- (void)_checkInRentalsNeedingCheckIn;
- (void)_sendPlaybackStartDatesToServerIfNecessary;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)checkInRentalWithID:(id)arg1 dsid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkOutRentalWithID:(id)arg1 dsid:(id)arg2 checkoutType:(unsigned long long)arg3 startPlaybackClock:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)initializeRentals;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

