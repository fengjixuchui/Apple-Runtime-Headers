//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/HKOverlayContext-Protocol.h>

@interface _TtC15HealthRecordsUI32MedicalRecordChartOverlayContext : NSObject <HKOverlayContext>
{
    // Error parsing type: , name: title
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: defaultColors
    // Error parsing type: , name: selectedColors
    // Error parsing type: , name: verticalAxis
    // Error parsing type: , name: cachedItem
    // Error parsing type: , name: cachedOverlayDisplayType
    // Error parsing type: , name: cachedDataSource
}

- (void).cxx_destruct;
- (id)init;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contextItemForLastUpdate;
- (id)initWithTitle:(id)arg1 dataSource:(id)arg2 defaultColors:(id)arg3 selectedColors:(id)arg4 verticalAxis:(id)arg5;

@end

