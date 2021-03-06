//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;

@interface MPSNNMultiaryGradientState : MPSState
{
    unsigned long long _srcCount;
    struct NNKernelSourceParams *_srcInfo;
    CDStruct_14f26992 *_srcSizes;
    CDStruct_1e3be3a8 _clipRect;
    CDStruct_da2e99ad _destSize;
    unsigned long long _destFeatureChannels;
    unsigned long long _destinationFeatureChannelOffset;
    id <MPSNNPadding> _padding;
    unsigned long long _maxBatchSize;
    BOOL _isBackwards;
    BOOL _initOnce;
    unsigned int _provenance;
}

- (void)dealloc;
- (id)initWithSourceCount:(unsigned long long)arg1;

@end

