//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DisplayTransportServices/DTSIOService-Protocol.h>

@class NSString;

@interface DTSIOServiceImpl : NSObject <DTSIOService>
{
    unsigned int _service;
}

@property(readonly, nonatomic) unsigned int service; // @synthesize service=_service;
- (id)openWithTask:(unsigned int)arg1 connectionType:(unsigned int)arg2 error:(int *)arg3;
- (void)dealloc;
- (id)initWithService:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

