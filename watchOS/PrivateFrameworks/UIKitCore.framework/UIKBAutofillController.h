//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface UIKBAutofillController : NSObject
{
    int _delegateNeedsAutofillMode;
    _Bool _shouldSaveAutofill;
    NSMutableDictionary *_autofillGroup;
    NSMutableDictionary *_fallbackAutofillGroup;
    _Bool _didOptOutOfAutofillSignup;
    UIColor *_textFieldOrigColor;
}

+ (unsigned int)translateToTextInputAutofillMode:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSaveAutofill; // @synthesize shouldSaveAutofill=_shouldSaveAutofill;
@property(copy, nonatomic) UIColor *textFieldOrigColor; // @synthesize textFieldOrigColor=_textFieldOrigColor;
@property(copy, nonatomic) NSMutableDictionary *fallbackAutofillGroup; // @synthesize fallbackAutofillGroup=_fallbackAutofillGroup;
@property(readonly, retain, nonatomic) NSMutableDictionary *autofillGroup; // @synthesize autofillGroup=_autofillGroup;
@property(nonatomic) int delegateNeedsAutofillMode; // @synthesize delegateNeedsAutofillMode=_delegateNeedsAutofillMode;
- (void)removeTemporaryTextColorFromTextField:(id)arg1;
- (void)addTemporaryTextColorToTextField:(id)arg1;
- (void)enumeratePasswordFieldsUsingBlock:(CDUnknownBlockType)arg1;
- (void)optOutASPInTextField;
- (void)clearASPInPasswordFields;
- (void)_clearASPInTextField:(id)arg1;
- (void)clearASPVisualEffectsInTextField:(id)arg1;
- (void)showASPInTextField:(id)arg1 isRightToLeft:(_Bool)arg2;
- (void)didOptOutOfAutofillSignup;
- (_Bool)shouldLoadASPForResponder:(id)arg1;
- (void)trackResponderForAutofillIfNeeded:(id)arg1;
- (void)handleWebviewCredentialsSaveForResponder:(id)arg1 WebsiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 passwordIsAutoGenerated:(_Bool)arg5;
- (void)handleAutofillCredentialSaveIfNeeded:(id)arg1 fromASP:(_Bool)arg2;
- (_Bool)preferFallbackAutofillGroup;
- (_Bool)containsUsernamePasswordPairsInAutofillGroup:(id)arg1;
- (void)clearFallbackAutofillGroup;
- (void)clearAutofillGroup;
- (int)_needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2;
- (_Bool)signupHintForUsername:(id)arg1 password:(id)arg2 responder:(id)arg3;
- (int)signUpSignalFromNavBarItem:(id)arg1;
- (int)signUpSignalFromViewControllerHierarchy:(id)arg1;
- (int)signUpSignalFromButton:(id)arg1;
- (int)containsIndicationInText:(id)arg1 withAccessibilityHints:(_Bool)arg2;
- (id)accessibilityLoginKeywordList;
- (id)accessibilitySignupKeywordList;
- (id)loginKeywordList;
- (id)signupKeywordList;
- (_Bool)_prohibitAutofill:(id)arg1 needASPKeyboard:(_Bool)arg2;
- (int)needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 keyboardState:(id)arg3;
- (void)updateAutofillContextForInputDelegate:(id)arg1;
- (id)autofillContextForInputDelegate:(id)arg1;
- (int)doTraits:(id)arg1 matchTextContentType:(id)arg2;
- (id)init;
- (void)_setAutofillGroup:(id)arg1;

@end

