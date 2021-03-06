//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataProvider-Protocol.h>

@class NSArray, NSString;

@interface ETImageFolderDataProvider : NSObject <ETDataProvider>
{
    struct vector<std::__1::pair<NSString *, unsigned long>, std::__1::allocator<std::__1::pair<NSString *, unsigned long>>> samples;
    struct vector<NSString *, std::__1::allocator<NSString *>> classes;
    struct shared_ptr<Espresso::blob_cpu> imageBlob;
    struct shared_ptr<Espresso::blob_cpu> labelBlob;
    shared_ptr_ae8b808b ctx;
    int nChannels;
    NSString *imageTensorName;
    NSArray *imageShape;
    struct vimage2espresso_param param;
    NSString *labelTensorName;
    NSArray *labelShape;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomgen;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vImage_Buffer)bufferWithPath:(id)arg1;
- (struct vImage_Buffer)preprocess:(struct vImage_Buffer)arg1;
- (unsigned int)numberOfDataPoints;
- (id)dataPointAtIndex:(unsigned int)arg1 error:(id *)arg2;
- (void)setImageTransforParams:(_Bool)arg1 biasR:(float)arg2 biasG:(float)arg3 biasB:(float)arg4 scale:(float)arg5;
- (id)initWithFolder:(id)arg1 forImage:(id)arg2 ofShape:(id)arg3 andLabel:(id)arg4;

@end

