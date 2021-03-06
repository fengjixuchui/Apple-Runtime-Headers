//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;
@protocol OS_xpc_object;

@interface NEFileHandle : NSObject
{
    _Bool _launchOwnerWhenReadable;
    NSFileHandle *_handle;
}

+ (id)fileHandleFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSFileHandle *handle; // @synthesize handle=_handle;
@property(readonly) _Bool launchOwnerWhenReadable; // @synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable;
@property(readonly) unsigned int type;
@property(readonly) NSObject<OS_xpc_object> *dictionary;
- (id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(_Bool)arg2;
- (id)initFromDictionary:(id)arg1;

@end

