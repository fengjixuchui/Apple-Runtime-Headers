//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol _CPPunchoutForFeedback <NSObject>
@property(readonly, nonatomic) unsigned long long whichBundleid;
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSArray *urls;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *name;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)addUrls:(NSString *)arg1;
- (void)clearUrls;
@end

