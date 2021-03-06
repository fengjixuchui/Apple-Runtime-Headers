//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSString, WFDataInfo;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding>
{
    INSpeakableString *_speakableString;
    NSString *_accountIdentifier;
    unsigned int _managedLevel;
}

+ (unsigned int)managedLevelForNotesAccounts;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int managedLevel; // @synthesize managedLevel=_managedLevel;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) INSpeakableString *speakableString; // @synthesize speakableString=_speakableString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) WFDataInfo *targetDataInfo;
- (id)descriptorWithTargetAccountIdentifier:(id)arg1 targetManagedLevel:(unsigned int)arg2;
- (id)initWithNoteGroupSpeakableString:(id)arg1;
- (id)initWithNoteGroupSpeakableString:(id)arg1 accountIdentifier:(id)arg2 managedLavel:(unsigned int)arg3;

@end

