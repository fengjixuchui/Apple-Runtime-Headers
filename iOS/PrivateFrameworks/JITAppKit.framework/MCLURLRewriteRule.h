//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JITAppKit/MCLURLRequestRewriteRule.h>

@class NSRegularExpression, NSSet, NSString;

@interface MCLURLRewriteRule : MCLURLRequestRewriteRule
{
    NSRegularExpression *_replacePattern;
    NSString *_replaceTemplate;
    NSSet *_ignoreHosts;
}

+ (id)urlRewriteRuleFromHost:(id)arg1 toHost:(id)arg2 ignoreHosts:(id)arg3;
- (void).cxx_destruct;
- (void)rewriteURLRequest:(id)arg1;
- (id)initWithMatchPattern:(id)arg1 replacePattern:(id)arg2 replaceTemplate:(id)arg3 ignoreHosts:(id)arg4;

@end

