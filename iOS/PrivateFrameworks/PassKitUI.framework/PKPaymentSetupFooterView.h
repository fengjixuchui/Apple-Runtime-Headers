//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableFooterView.h>

@class UIButton, UILabel;

@interface PKPaymentSetupFooterView : PKTableFooterView
{
    UIButton *_continueButton;
    UIButton *_skipCardButton;
    UILabel *_notificationText;
    _Bool _isBuddyiPad;
    _Bool _forceShowSetupLaterButton;
    long long _context;
    UIButton *_manualEntryButton;
    UIButton *_setupLaterButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;
@property(retain, nonatomic) UIButton *manualEntryButton; // @synthesize manualEntryButton=_manualEntryButton;
@property(nonatomic) _Bool forceShowSetupLaterButton; // @synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton;
@property(nonatomic) long long context; // @synthesize context=_context;
- (void)_createSetupLaterButton;
- (void)setButtonsEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)_sizeForLabel:(id)arg1 maxText:(id)arg2 constrainedToSize:(struct CGSize)arg3;
@property(retain, nonatomic) UIButton *skipCardButton;
@property(retain, nonatomic) UILabel *notificationText;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;

@end

