//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions;
@protocol UIScrollViewDelegate;

@protocol _MKInfoCardController <NSObject>
+ (float)headerHeightInMinimalMode;
@property(nonatomic) float contentAlpha;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
- (void)updateMaskAlpha:(float)arg1 onHeight:(float)arg2 withOffset:(float)arg3;
- (void)hideTitle:(_Bool)arg1;
@end

