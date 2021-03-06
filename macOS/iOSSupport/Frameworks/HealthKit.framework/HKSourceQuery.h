//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKSourceQueryClientInterface-Protocol.h>

@class NSString;
@protocol HKQueryServerInterface;

@interface HKSourceQuery : HKQuery <HKSourceQueryClientInterface>
{
    BOOL _hasDeliveredInitialResults;
    id <HKQueryServerInterface> _serverProxy;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _updateHandler;
}

+ (void)configureServerInterface:(id)arg1;
+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)client_deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (void)client_deliverSources:(id)arg1 forQuery:(id)arg2;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

