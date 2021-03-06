//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkProviding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SKUIArtwork;

@interface SKUIArtworkList : NSObject <SKUIArtworkProviding>
{
    NSMutableArray *_artworks;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)canHandleArtworkFormat:(id)arg1;
+ (id)artworkForSize:(long long)arg1 artworkDictionaries:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *artworks; // @synthesize artworks=_artworks;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=_lookupArray) NSArray *_lookupArray;
@property(readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property(readonly, nonatomic) SKUIArtwork *largestArtwork;
- (_Bool)hasArtwork;
- (id)preferredExactArtworkForSize:(struct CGSize)arg1;
- (id)bestArtworkForScaledSize:(struct CGSize)arg1;
- (id)bestArtworkForSize:(struct CGSize)arg1;
- (id)artworkWithWidth:(long long)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworkForSize:(long long)arg1;
- (id)initWithLookupArray:(id)arg1;
- (id)initWithArtworkListArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

