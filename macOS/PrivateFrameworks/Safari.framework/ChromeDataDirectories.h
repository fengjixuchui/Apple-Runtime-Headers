//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/BrowserDataDirectories.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface ChromeDataDirectories : BrowserDataDirectories
{
}

+ (BOOL)supportsSecureCoding;
- (Class)historyImporterClass;
- (Class)credentialImporterClass;
- (Class)bookmarkImportEngineClass;
@property(readonly, nonatomic) NSURL *loginDatabaseURL;
@property(readonly, nonatomic) NSURL *historyDatabaseURL;
@property(readonly, nonatomic) NSURL *bookmarksFileURL;

@end

