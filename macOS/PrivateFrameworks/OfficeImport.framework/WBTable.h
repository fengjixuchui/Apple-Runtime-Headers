//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTable : NSObject
{
}

+ (BOOL)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;
+ (void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3;
+ (BOOL)isTableFloating:(const struct WrdTableProperties *)arg1 tracked:(const struct WrdTableProperties *)arg2;
+ (void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;
+ (void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3;

@end

