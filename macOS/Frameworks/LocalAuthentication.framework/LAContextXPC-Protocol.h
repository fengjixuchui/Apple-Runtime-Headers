//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LocalAuthentication/LAContextClientEvaluationProt-Protocol.h>
#import <LocalAuthentication/LAContextEventFeedbackProt-Protocol.h>
#import <LocalAuthentication/LAContextExternalizationProt-Protocol.h>
#import <LocalAuthentication/LAContextPropertiesProt-Protocol.h>

@class NSData;

@protocol LAContextXPC <LAContextExternalizationProt, LAContextPropertiesProt, LAContextClientEvaluationProt, LAContextEventFeedbackProt>
- (void)tokenForTransferToUnknownProcess:(void (^)(NSData *, NSError *))arg1;
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(NSData *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
@end

