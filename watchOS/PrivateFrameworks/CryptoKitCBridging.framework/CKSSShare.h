//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKSSShare : NSObject
{
    struct cczp *_field;
    struct ccss_shamir_share *_share;
    unsigned long _share_size;
}

- (void)dealloc;
- (void)loadInitializedccShare:(struct ccss_shamir_share *)arg1;
- (id)y;
- (unsigned int)x;
- (id)initWithParams:(struct ccss_shamir_parameters *)arg1 share:(struct ccss_shamir_share *)arg2;
- (id)initWithParams:(struct ccss_shamir_parameters *)arg1 x:(unsigned int)arg2 y:(id)arg3;

@end

