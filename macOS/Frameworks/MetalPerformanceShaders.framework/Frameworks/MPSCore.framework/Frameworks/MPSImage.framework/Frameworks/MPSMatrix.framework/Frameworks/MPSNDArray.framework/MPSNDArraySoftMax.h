//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNDArray/MPSNDArrayUnaryKernel.h>

@interface MPSNDArraySoftMax : MPSNDArrayUnaryKernel
{
    unsigned long long _axis;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
- (id)reshapeFitToTileToCommandBuffer:(id)arg1 currentSource:(id)arg2 kernelDimension:(unsigned long long)arg3 dimensionsToBeRetained: /* Error: Ran out of types for this method. */;
-     // Error parsing type: 16@0:8, name: dimensionsToBeRetained
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 axis:(unsigned long long)arg2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;

@end

