//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RPDTexture : NSObject
{
    unsigned int _texture;
}

+ (id)builtinTextureNamed:(id)arg1;
+ (id)textureWithImageData:(id)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3 format:(int)arg4;
+ (id)textureWithContentsOfURL:(id)arg1;
+ (void)clearCachedTextures;
+ (void)preloadTexturesWithNames:(id)arg1 extension:(id)arg2;
+ (void)preloadBuiltinTextures;
@property(nonatomic) unsigned int texture; // @synthesize texture=_texture;
- (void)dealloc;
- (id)initWithImageData:(const void *)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3 format:(int)arg4;
- (id)initWithContentsOfURL:(id)arg1;

@end

