//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AACCore/AEXPCConnectionOrigin-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AEMachServiceXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin>
{
    NSString *_machServiceName;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (id)makeConnection;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;

@end

