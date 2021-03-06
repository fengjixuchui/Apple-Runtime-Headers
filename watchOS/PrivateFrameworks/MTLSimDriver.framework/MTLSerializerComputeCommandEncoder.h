//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLSimDriver/MTLSerializerCommandEncoder.h>

#import <MTLSimDriver/MTLComputeCommandEncoderSPI-Protocol.h>

@class NSString;
@protocol MTLDevice, MTLSerializerBuffer, MTLSerializerComputePipelineState, MTLSerializerSamplerState, MTLSerializerTexture;

__attribute__((visibility("hidden")))
@interface MTLSerializerComputeCommandEncoder : MTLSerializerCommandEncoder <MTLComputeCommandEncoderSPI>
{
    _Bool hadSplit;
    id <MTLSerializerBuffer> buffers[31];
    id <MTLSerializerTexture> textures[96];
    id <MTLSerializerSamplerState> samplers[16];
    id <MTLSerializerComputePipelineState> pipelineState;
}

- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned int)arg3;
- (void)setImageblockWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (unsigned int)getType;
- (void)memoryBarrierWithScope:(unsigned int)arg1;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned int)arg2;
- (id)newKernelDebugInfo;
- (void)waitForFence:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)setThreadgroupMemoryLength:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned int)arg2;
- (void)setStageInRegion:(CDStruct_4e0934b9)arg1;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setComputePipelineState:(id)arg1;
- (void)setBytes:(const void *)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned int *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)dispatchThreads:(CDStruct_778afa1c)arg1 threadsPerThreadgroup:(CDStruct_778afa1c)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned int)arg2 threadsPerThreadgroup:(CDStruct_778afa1c)arg3;
- (void)dispatchThreadgroups:(CDStruct_778afa1c)arg1 threadsPerThreadgroup:(CDStruct_778afa1c)arg2;
- (_Bool)handleSplits;
- (void)beginSegment:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 dispatchType:(unsigned int)arg2;
- (void)split;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned int dispatchType;
@property(readonly) unsigned int hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

