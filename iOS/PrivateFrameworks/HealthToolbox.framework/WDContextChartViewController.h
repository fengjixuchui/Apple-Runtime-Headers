//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class HKDisplayTypeContextView, HKInteractiveChartViewController;

__attribute__((visibility("hidden")))
@interface WDContextChartViewController : HKViewController
{
    HKInteractiveChartViewController *_interactiveChartViewController;
    HKDisplayTypeContextView *_contextView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKDisplayTypeContextView *contextView; // @synthesize contextView=_contextView;
@property(readonly, nonatomic) HKInteractiveChartViewController *interactiveChartViewController; // @synthesize interactiveChartViewController=_interactiveChartViewController;
- (double)preferredHeight;
- (void)viewDidLoad;
- (id)initWithInteractiveChartViewController:(id)arg1;

@end

