//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@class MPSExternalCNNUnary;
@protocol MPSImageAllocator, MPSNNPadding;

@interface MPSCNNKernel : MPSKernel
{
    CDStruct_d6af7fc0 _offset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _sourceFeatureChannelOffset;
    unsigned long long _sourceFeatureChannelMaxCount;
    MPSExternalCNNUnary *_plugin;
    _Bool _pluginSupportsBatchEncode;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
    id <MPSNNPadding> _padding;
    unsigned long long _maxBatchSize;
    _Bool _isBackwards;
    unsigned long long _edgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    CDUnknownFunctionPointerType _batchEncode;
    void *_encodeData;
    unsigned long long _pluginOptions;
    id <MPSImageAllocator> _destinationImageAllocator;
}

@property(readonly, nonatomic) unsigned long long dilationRateY; // @synthesize dilationRateY=_dilationRateY;
@property(readonly, nonatomic) unsigned long long dilationRateX; // @synthesize dilationRateX=_dilationRateX;
@property(retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator; // @synthesize destinationImageAllocator=_destinationImageAllocator;
@property(retain, nonatomic) id <MPSNNPadding> padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool isBackwards; // @synthesize isBackwards=_isBackwards;
@property(readonly, nonatomic) unsigned long long strideInPixelsY; // @synthesize strideInPixelsY=_strideInPixelsY;
@property(readonly, nonatomic) unsigned long long strideInPixelsX; // @synthesize strideInPixelsX=_strideInPixelsX;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property(nonatomic) unsigned long long sourceFeatureChannelMaxCount; // @synthesize sourceFeatureChannelMaxCount=_sourceFeatureChannelMaxCount;
@property(nonatomic) unsigned long long sourceFeatureChannelOffset; // @synthesize sourceFeatureChannelOffset=_sourceFeatureChannelOffset;
@property(nonatomic) unsigned long long destinationFeatureChannelOffset; // @synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset;
@property(nonatomic) unsigned long long edgeMode; // @synthesize edgeMode=_edgeMode;
@property(nonatomic) CDStruct_1e3be3a8 clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) CDStruct_d6af7fc0 offset; // @synthesize offset=_offset;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (_Bool)filterHandlesPlugin;
- (_Bool)setPlugin:(id)arg1;
- (_Bool)pluginSupportsBatchEncode;
- (id)plugin;
- (unsigned long long)maxBatchSize;
-     // Error parsing type: 16@0:8, name: sourcePositionOfTopLeftCornerOfFilterWindow
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4 kernelOffset:(CDStruct_d6af7fc0 *)arg5;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (void)dealloc;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4;
- (id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id *)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(id *)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id)arg3 destinationImages:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3;
- (id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id *)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceState:(id)arg3 destinationState:(id *)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2;
- (void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)appendBatchBarrier;
- (_Bool)isResultStateReusedAcrossBatch;
@property(readonly, nonatomic) _Bool isStateModified;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

