//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDesaturateShadows : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputSoftness;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness;
@property(retain, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
- (id)outputImage;

@end

