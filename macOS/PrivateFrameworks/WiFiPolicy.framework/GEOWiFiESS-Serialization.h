//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOWiFiESS.h>

#import <WiFiPolicy/NSSecureCoding-Protocol.h>
#import <WiFiPolicy/TBNetwork-Protocol.h>

@class NSSet, NSString;
@protocol TBScore;

@interface GEOWiFiESS (Serialization) <TBNetwork, NSSecureCoding>
+ (BOOL)supportsSecureCoding;
- (BOOL)_hasAttribute:(int)arg1;
@property(readonly, nonatomic, getter=isPublic) BOOL public;
@property(readonly, nonatomic, getter=isSuspicious) BOOL suspicious;
@property(readonly, nonatomic, getter=isMoving) BOOL moving;
@property(readonly, nonatomic, getter=isCaptive) BOOL captive;
@property(readonly, nonatomic) id <TBScore> qualityScore;
@property(readonly, nonatomic) id <TBScore> popularityScore;
@property(readonly, nonatomic) NSSet *accessPoints;
@property(readonly, nonatomic) NSString *remoteIdentifier;
@property(readonly, nonatomic) NSString *SSID;
@property(readonly, nonatomic) NSString *attributesDescription;
@property(readonly, nonatomic) NSString *authDescription;
@property(readonly, nonatomic) unsigned long long authMask;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long tileKey;
@end

