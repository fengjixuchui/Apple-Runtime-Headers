//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFPopoverSourceInfo-Protocol.h>

@class NSString, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface SFUIBarButtonItemPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>
{
    UIBarButtonItem *_item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly) Class superclass;

@end

