//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Spotlight/SPKQuery.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SPKCalculatorQuery : SPKQuery
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_results;
}

+ (BOOL)isQuerySupported:(unsigned long long)arg1;
+ (void)enableCalculator:(BOOL)arg1;
+ (void)enableConversion:(BOOL)arg1;
+ (void)initialize;
+ (void)cacheSeparators;
- (void).cxx_destruct;
@property(retain) NSArray *results; // @synthesize results=_results;
- (BOOL)isCalculatorQuery;
- (void)start;
- (BOOL)looksLikeMath;
- (id)initWithUserQuery:(id)arg1 queryGroupId:(unsigned long long)arg2 options:(unsigned long long)arg3 keyboardLanguage:(id)arg4;

@end

