//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _AXKClassPredicate : NSObject
{
    Class _controllerClass;
    CDUnknownBlockType _predicate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(nonatomic) Class controllerClass; // @synthesize controllerClass=_controllerClass;
- (Class)evaluate:(id)arg1;

@end

