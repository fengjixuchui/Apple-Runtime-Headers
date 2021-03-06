//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Geode/DGOperation.h>

#import <Geode/NSCopying-Protocol.h>

@class NSColor, NSNumber;

@interface DGSelectiveColorOperation : DGOperation <NSCopying>
{
    NSNumber *_inputFilterVersion;
    NSColor *_input1Color;
    double _input1HueBase;
    double _input1HueShift;
    double _input1Saturation;
    double _input1Luminance;
    double _input1Spread;
    NSColor *_input2Color;
    double _input2HueBase;
    double _input2HueShift;
    double _input2Saturation;
    double _input2Luminance;
    double _input2Spread;
    NSColor *_input3Color;
    double _input3HueBase;
    double _input3HueShift;
    double _input3Saturation;
    double _input3Luminance;
    double _input3Spread;
    NSColor *_input4Color;
    double _input4HueBase;
    double _input4HueShift;
    double _input4Saturation;
    double _input4Luminance;
    double _input4Spread;
    NSColor *_input5Color;
    double _input5HueBase;
    double _input5HueShift;
    double _input5Saturation;
    double _input5Luminance;
    double _input5Spread;
    NSColor *_input6Color;
    double _input6HueBase;
    double _input6HueShift;
    double _input6Saturation;
    double _input6Luminance;
    double _input6Spread;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (void)_configureSpreadControllers;
+ (void)_configureLuminanceControllers;
+ (void)_configureSaturationControllers;
+ (void)_configureHueShiftControllers;
+ (void)_configureHueBaseControllers;
+ (void)_configureHueBaseControllerWithKey:(id)arg1 defaultHue:(double)arg2;
+ (void)iterateTypes:(CDUnknownBlockType)arg1;
+ (void)iterateHues:(CDUnknownBlockType)arg1;
+ (id)colorKeyWithHue:(long long)arg1;
+ (id)inputKeyWithHue:(long long)arg1 type:(long long)arg2;
+ (id)inputKeysWithType:(long long)arg1;
+ (id)inputKeysWithHue:(long long)arg1;
+ (id)stringForType:(long long)arg1;
+ (id)stringForHue:(long long)arg1;
+ (void)initialize;
+ (id)_stringsTableName;
- (void).cxx_destruct;
@property double input6Spread; // @synthesize input6Spread=_input6Spread;
@property double input6Luminance; // @synthesize input6Luminance=_input6Luminance;
@property double input6Saturation; // @synthesize input6Saturation=_input6Saturation;
@property double input6HueShift; // @synthesize input6HueShift=_input6HueShift;
@property double input6HueBase; // @synthesize input6HueBase=_input6HueBase;
@property(copy, nonatomic) NSColor *input6Color; // @synthesize input6Color=_input6Color;
@property double input5Spread; // @synthesize input5Spread=_input5Spread;
@property double input5Luminance; // @synthesize input5Luminance=_input5Luminance;
@property double input5Saturation; // @synthesize input5Saturation=_input5Saturation;
@property double input5HueShift; // @synthesize input5HueShift=_input5HueShift;
@property double input5HueBase; // @synthesize input5HueBase=_input5HueBase;
@property(copy, nonatomic) NSColor *input5Color; // @synthesize input5Color=_input5Color;
@property double input4Spread; // @synthesize input4Spread=_input4Spread;
@property double input4Luminance; // @synthesize input4Luminance=_input4Luminance;
@property double input4Saturation; // @synthesize input4Saturation=_input4Saturation;
@property double input4HueShift; // @synthesize input4HueShift=_input4HueShift;
@property double input4HueBase; // @synthesize input4HueBase=_input4HueBase;
@property(copy, nonatomic) NSColor *input4Color; // @synthesize input4Color=_input4Color;
@property double input3Spread; // @synthesize input3Spread=_input3Spread;
@property double input3Luminance; // @synthesize input3Luminance=_input3Luminance;
@property double input3Saturation; // @synthesize input3Saturation=_input3Saturation;
@property double input3HueShift; // @synthesize input3HueShift=_input3HueShift;
@property double input3HueBase; // @synthesize input3HueBase=_input3HueBase;
@property(copy, nonatomic) NSColor *input3Color; // @synthesize input3Color=_input3Color;
@property double input2Spread; // @synthesize input2Spread=_input2Spread;
@property double input2Luminance; // @synthesize input2Luminance=_input2Luminance;
@property double input2Saturation; // @synthesize input2Saturation=_input2Saturation;
@property double input2HueShift; // @synthesize input2HueShift=_input2HueShift;
@property double input2HueBase; // @synthesize input2HueBase=_input2HueBase;
@property(copy, nonatomic) NSColor *input2Color; // @synthesize input2Color=_input2Color;
@property double input1Spread; // @synthesize input1Spread=_input1Spread;
@property double input1Luminance; // @synthesize input1Luminance=_input1Luminance;
@property double input1Saturation; // @synthesize input1Saturation=_input1Saturation;
@property double input1HueShift; // @synthesize input1HueShift=_input1HueShift;
@property double input1HueBase; // @synthesize input1HueBase=_input1HueBase;
@property(copy, nonatomic) NSColor *input1Color; // @synthesize input1Color=_input1Color;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)settingsDictionary;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (BOOL)isMigratable;

@end

