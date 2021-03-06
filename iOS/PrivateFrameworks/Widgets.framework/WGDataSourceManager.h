//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Widgets/_WGParentDataSourceManager-Protocol.h>

@class NSMutableDictionary, NSString, WGWidgetDataSourceManager;

@interface WGDataSourceManager : NSObject <_WGParentDataSourceManager>
{
    _Bool _didBegin;
    NSMutableDictionary *_identifiersToWidgetChangeHandlers;
    WGWidgetDataSourceManager *_widgetDataSourceManager;
}

+ (void)requestSharedDataSourceManager:(CDUnknownBlockType)arg1;
+ (id)__sharedInstance;
- (void).cxx_destruct;
- (void)childDataSourceManagerDataSourcesDidChange:(id)arg1;
- (id)discoverAvailableWidgetsWithError:(id *)arg1;
- (void)removeChangeHandlersWithIdentifier:(id)arg1;
- (void)addWidgetDataSourceChangeHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)_stop:(CDUnknownBlockType)arg1;
- (void)_start:(CDUnknownBlockType)arg1;
- (void)_begin:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

