//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PGChevronView;

__attribute__((visibility("hidden")))
@interface PGStashedView : UIView
{
    PGChevronView *_chevronViewLeftColorBurn;
    PGChevronView *_chevronViewLeftPlusD;
    PGChevronView *_chevronViewRightColorBurn;
    PGChevronView *_chevronViewRightPlusD;
    _Bool _stashed;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isStashed) _Bool stashed; // @synthesize stashed=_stashed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

