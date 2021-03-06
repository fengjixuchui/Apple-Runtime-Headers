//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDActionOperationQueue, FPDMoveReader, FPDMoveWriter, FPMoveInfo;

@interface FPDMoveOperation : FPDActionOperation
{
    FPDMoveReader *_reader;
    FPDMoveWriter *_writer;
    FPDActionOperationQueue *_queue;
}

+ (BOOL)_validateInfo:(id)arg1;
- (void).cxx_destruct;
- (void)_t_unblockReader;
- (void)dumpStateTo:(id)arg1;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)sendPastUpdatesToClient:(id)arg1;
- (void)main;
- (id)moveInfo;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) FPMoveInfo *info; // @dynamic info;

@end

