//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/DCMapsLink.h>

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface DCStandardMapsLink : DCMapsLink
{
    NSURL *_URL;
    NSDictionary *_queryDictionary;
}

+ (id)mapsLinkWithURL:(id)arg1;
+ (_Bool)isMapsURL:(id)arg1;
+ (_Bool)isStandardGoogleMapsURL:(id)arg1;
+ (_Bool)isStandardAppleMapsURL:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)streetViewLocation;
- (_Bool)showsBicycling;
- (_Bool)showsStreetView;
- (_Bool)showsTransit;
- (_Bool)showsTraffic;
- (unsigned long long)mapType;
- (long long)zoomLevel;
- (id)centerLocation;
- (unsigned long long)directionsMode;
- (id)destinationAddress;
- (id)startAddress;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (id)initWithURL:(id)arg1;

@end

