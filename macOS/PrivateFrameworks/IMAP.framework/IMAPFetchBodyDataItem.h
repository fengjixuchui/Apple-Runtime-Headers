//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/IMAPFetchDataItem.h>

@class NSString;

@interface IMAPFetchBodyDataItem : IMAPFetchDataItem
{
    long long _textSectionSpecifier;
    NSString *_partSectionSpecifier;
    struct _NSRange _dataRange;
}

+ (id)newSectionSpecifierFromPart:(id)arg1 text:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSString *partSectionSpecifier; // @synthesize partSectionSpecifier=_partSectionSpecifier;
@property(readonly) long long textSectionSpecifier; // @synthesize textSectionSpecifier=_textSectionSpecifier;
@property(readonly) struct _NSRange dataRange; // @synthesize dataRange=_dataRange;
@property(readonly) BOOL isHeader;
- (void)_finalizeCommandStringWithHeaderFieldNames:(id)arg1 peek:(BOOL)arg2;
- (id)initWithHeaderFieldNames:(id)arg1;
- (id)initWithPartSectionSpecifier:(id)arg1 textSectionSpecifier:(long long)arg2 dataRange:(struct _NSRange)arg3;
- (id)init;
- (id)initWithPartSectionSpecifier:(id)arg1 textSectionSpecifier:(long long)arg2 peek:(BOOL)arg3 headerFieldNames:(id)arg4 dataRange:(struct _NSRange)arg5;

@end

