//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface SUCatalog : NSObject
{
    NSURL *_catalogURL;
    NSDictionary *_dictionaryRepresentation;
}

+ (void)initialize;
- (id)postDateForProductKey:(id)arg1;
- (id)extraInfoForProductKey:(id)arg1;
- (id)packageDictionariesForProductKey:(id)arg1;
- (id)distributionURLForProductKey:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizationsForProductKey:(id)arg1;
- (id)productDictionaryForProductKey:(id)arg1;
- (id)productKeys;
- (long long)catalogVersion;
- (id)dictionaryRepresentation;
- (id)catalogURL;
- (id)description;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 catalogURL:(id)arg2;
- (id)productByLoadingDistributionForProductKey:(id)arg1 localization:(id)arg2 error:(id *)arg3;

@end

