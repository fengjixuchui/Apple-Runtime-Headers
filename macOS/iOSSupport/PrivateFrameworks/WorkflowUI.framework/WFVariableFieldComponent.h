//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponent.h>

@class NSString;

@interface WFVariableFieldComponent : CKStatefulViewComponent
{
    BOOL _editable;
    NSString *_text;
    CDUnknownBlockType _updateBlock;
}

+ (id)newWithText:(id)arg1 editable:(BOOL)arg2 updateBlock:(CDUnknownBlockType)arg3 size:(const struct CKComponentSize *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

@end

