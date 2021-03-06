//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSPersistentHistoryToken, NSSet, PFHistoryAnalyzerOptions;

__attribute__((visibility("hidden")))
@interface PFHistoryAnalyzerContext : NSObject
{
    NSMutableDictionary *_objectIDToState;
    NSMutableSet *_processedTransactionIDs;
    NSArray *_sortedStates;
    BOOL _isFinished;
    NSPersistentHistoryToken *_finalHistoryToken;
    PFHistoryAnalyzerOptions *_options;
}

@property(readonly, nonatomic) NSPersistentHistoryToken *finalHistoryToken; // @synthesize finalHistoryToken=_finalHistoryToken;
@property(readonly, nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(readonly, nonatomic) NSSet *processedTransactionIDs; // @synthesize processedTransactionIDs=_processedTransactionIDs;
@property(readonly, nonatomic) PFHistoryAnalyzerOptions *options; // @synthesize options=_options;
- (id)fetchSortedStates:(id *)arg1;
- (void)processFinalState:(id)arg1;
- (BOOL)shouldPruneAnalyzerState:(id)arg1;
- (BOOL)finishProcessing:(id *)arg1;
- (id)newAnalyzerStateForChange:(id)arg1 error:(id *)arg2;
- (id)analyzerStateForChangedObjectID:(id)arg1 error:(id *)arg2;
- (BOOL)processChange:(id)arg1 error:(id *)arg2;
- (BOOL)resetStateForObjectID:(id)arg1 error:(id *)arg2;
- (BOOL)processTransaction:(id)arg1 error:(id *)arg2;
- (BOOL)reset:(id *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

