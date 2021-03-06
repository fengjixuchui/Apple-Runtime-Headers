//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/NSCopying-Protocol.h>

@class NSAttributedString, NSString, UIFont;

@interface CPSMultilineLabelConfig : NSObject <NSCopying>
{
    NSString *_text;
    UIFont *_font;
    unsigned long long _lineCount;
    NSAttributedString *_attributedText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToLabelConfig:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

