//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOKit/HIDElement.h>

@class NSArray, NSData;

@interface HIDElement (HIDFramework)
@property(readonly) unsigned long long timestamp;
@property(readonly) int physicalMax;
@property(readonly) int physicalMin;
@property(readonly) int logicalMax;
@property(readonly) int logicalMin;
@property(readonly) int unitExponent;
@property(readonly) int unit;
@property(readonly) int reportSize;
@property(readonly) int reportID;
@property(readonly) int usage;
@property(readonly) int usagePage;
@property(readonly) int type;
@property(readonly) NSArray *children;
@property(readonly) HIDElement *parent;
@property NSData *dataValue;
@property int integerValue;
- (double)scaleValue:(int)arg1;
- (unsigned int)cookie;
- (void)setValueRef:(struct __IOHIDValue *)arg1;
- (struct __IOHIDValue *)valueRef;
- (id)description;
@end

