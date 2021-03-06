//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class CNPhoneNumber, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate>
{
    _Bool _returnsMultipleResults;
    CNPhoneNumber *_phoneNumber;
    NSString *_prefixHint;
    NSString *_digits;
    NSString *_countryCode;
    NSArray *_groupIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *digits; // @synthesize digits=_digits;
@property(readonly, copy, nonatomic) NSString *prefixHint; // @synthesize prefixHint=_prefixHint;
@property(readonly, nonatomic) _Bool returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property(readonly, copy, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)shortDebugDescription;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 prefixHint:(id)arg2 groupIdentifiers:(id)arg3 returnMultipleResults:(_Bool)arg4;
- (id)initWithPhoneNumber:(id)arg1 prefixHint:(id)arg2 returnMultipleResults:(_Bool)arg3;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2 returnMultipleResults:(_Bool)arg3;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(_Bool)arg2;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

