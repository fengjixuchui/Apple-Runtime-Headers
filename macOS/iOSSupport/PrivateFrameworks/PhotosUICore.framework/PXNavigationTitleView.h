//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIFont, UILabel;

@interface PXNavigationTitleView : UIView
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct {
        char texts;
        char fonts;
        char constraints;
        char size;
    } _needsUpdateFlags;
    BOOL __subtitleVisible;
    long long _verticalSizeClass;
    NSString *_title;
    NSString *_subtitle;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    long long _textAlignment;
    double _subviewsAlpha;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    NSArray *__constraints;
    struct UIEdgeInsets _margins;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, getter=_isSubtitleVisible, setter=_setSubtitleVisible:) BOOL _subtitleVisible; // @synthesize _subtitleVisible=__subtitleVisible;
@property(readonly, nonatomic) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(nonatomic) double subviewsAlpha; // @synthesize subviewsAlpha=_subviewsAlpha;
@property(nonatomic, setter=setMargins:) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
- (void)_updateSizeIfNeeded;
- (void)_invalidateSize;
- (void)_updateConstraintsIfNeeded;
- (void)_invalidateConstraints;
- (void)_updateFontsIfNeeded;
- (void)_invalidateFonts;
- (void)_updateTextsIfNeeded;
- (void)_invalidateTexts;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

