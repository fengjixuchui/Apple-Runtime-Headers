//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PolicyBase : NSObject
{
}

- (struct __CFDate *)dateValueForKey:(struct __CFString *)arg1 inDictionary:(struct __CFDictionary *)arg2;
- (int)intValueForKey:(struct __CFString *)arg1 inDictionary:(struct __CFDictionary *)arg2;
- (char *)policyAsXMLDataCopy:(BOOL)arg1;
- (char *)policyAsXMLDataCopy;
- (struct __CFString *)policyAsSpaceDelimitedDataCopy;
- (id)initWithDictionary:(struct __CFDictionary *)arg1;
- (id)initWithUTF8String:(const char *)arg1;

@end

