//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CALFilter.h>

@class NSArray;

@interface CALSubComponentFilter : CALFilter
{
    NSArray *_classes;
    int _mode;
}

+ (id)filterSubComponentsWithClasses:(id)arg1 withMode:(int)arg2;
- (void).cxx_destruct;
- (void)applyTo:(id)arg1;
- (id)initWithSubComponentsWithClasses:(id)arg1 withMode:(int)arg2;

@end

