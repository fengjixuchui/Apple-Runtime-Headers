//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class NSArray;
@protocol DOCTagEditorDelegate;

@protocol DOCTagEditorPresenter <NSObject>
@property(retain, nonatomic) NSArray *items;
@property(nonatomic) __weak id <DOCTagEditorDelegate> delegate;
@property(nonatomic) _Bool isExtremelyVerticallyCompact;
@property(nonatomic) _Bool delayResizingUntilAppeared;
@property(nonatomic) _Bool pinTextFieldToTopBound;
@property(nonatomic) _Bool useCompactColorPicker;
@property(nonatomic) _Bool showAddTagConfirmButtons;
@end

