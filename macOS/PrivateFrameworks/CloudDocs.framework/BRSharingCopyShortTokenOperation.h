//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShortTokenOperation : BROperation
{
    NSURL *_fileURL;
    CDUnknownBlockType _shortTokenCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType shortTokenCompletionBlock; // @synthesize shortTokenCompletionBlock=_shortTokenCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

