//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@interface NSServicesRolloverButtonCell : NSButtonCell
{
    long long _style;
}

+ (id)serviceRolloverButtonCellForStyle:(long long)arg1;
@property(readonly) long long style; // @synthesize style=_style;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (struct CGRect)rectForBounds:(struct CGRect)arg1 preferredEdge:(unsigned long long)arg2;
- (id)initWithStyle:(long long)arg1;

@end

