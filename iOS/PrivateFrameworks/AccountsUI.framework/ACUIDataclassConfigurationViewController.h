//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, MCUIUserEnrollmentAccountSpecifierProvider, NSArray, NSMutableDictionary, NSString, PSSpecifier;

@interface ACUIDataclassConfigurationViewController : ACUIViewController
{
    _Bool _forceMailSetup;
    NSString *_accountIdentifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    _Bool _isMergingSyncData;
    PSSpecifier *_deleteButtonSpecifier;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSArray *_dataclassSpecifiers;
    NSArray *_otherSpecifiers;
    _Bool _didShowDataclassActionPickerDuringRemoval;
    MCUIUserEnrollmentAccountSpecifierProvider *_userEnrollmentAccountSpecifierProvider;
    _Bool _firstTimeSetup;
    _Bool _shouldShowDeleteAccountButton;
    _Bool _shouldEnableDeleteAccountButton;
    _Bool _shouldEnableAccountSummaryCell;
    _Bool _isMailSetupForced;
    NSArray *_preEnabledDataclasses;
    ACAccount *_account;
    PSSpecifier *_dataclassGroupSpecifier;
    CDUnknownBlockType _configurationCompletion;
}

+ (_Bool)shouldPresentAsModalSheet;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType configurationCompletion; // @synthesize configurationCompletion=_configurationCompletion;
@property(nonatomic) _Bool isMailSetupForced; // @synthesize isMailSetupForced=_isMailSetupForced;
@property(nonatomic) _Bool shouldEnableAccountSummaryCell; // @synthesize shouldEnableAccountSummaryCell=_shouldEnableAccountSummaryCell;
@property(nonatomic) _Bool shouldEnableDeleteAccountButton; // @synthesize shouldEnableDeleteAccountButton=_shouldEnableDeleteAccountButton;
@property(nonatomic) _Bool shouldShowDeleteAccountButton; // @synthesize shouldShowDeleteAccountButton=_shouldShowDeleteAccountButton;
@property(readonly, nonatomic) PSSpecifier *deleteButtonSpecifier; // @synthesize deleteButtonSpecifier=_deleteButtonSpecifier;
@property(retain, nonatomic) PSSpecifier *dataclassGroupSpecifier; // @synthesize dataclassGroupSpecifier=_dataclassGroupSpecifier;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSArray *preEnabledDataclasses; // @synthesize preEnabledDataclasses=_preEnabledDataclasses;
@property(nonatomic, getter=isFirstTimeSetup) _Bool firstTimeSetup; // @synthesize firstTimeSetup=_firstTimeSetup;
- (id)userEnrollmentAccountSpecifierProvider;
- (_Bool)isUserEnrollment;
- (_Bool)_confirmSyncDelete;
- (_Bool)_confirmDeleteLocalDataForDataclasses:(id)arg1;
- (_Bool)_confirmKeepLocalDataForDataclasses:(id)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (_Bool)isAppleMailAccount:(id)arg1;
- (id)deviceMessage;
- (long long)_promptUserToConfirmAccountSyncDeletion;
- (_Bool)_promptUserToConfirmAccountDeletion;
- (long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2;
- (_Bool)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
- (void)deleteButtonTapped:(id)arg1;
- (void)appendDeleteAccountButton;
- (_Bool)_isShowingDeleteAccountButton;
- (void)_notifyOfAccountSetupCompletion;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (id)_accountIdentifier;
- (id)_orderDataclassList:(id)arg1;
- (void)_setDataclass:(id)arg1 enabled:(_Bool)arg2;
- (void)setDataclass:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)_setupSpinnerTimerForSpecifier:(id)arg1;
- (id)dataclassSwitchStateForSpecifier:(id)arg1;
- (void)reloadDynamicSpecifiersWithAnimation:(_Bool)arg1;
- (id)otherSpecifiers;
- (_Bool)_isUserOverridableForDataclass:(id)arg1;
- (id)specifierForDataclass:(id)arg1;
- (_Bool)shouldShowSpecifierForDataclass:(id)arg1;
- (id)_specifiersForDataclasses:(id)arg1;
- (id)specifierForAccountSummaryCell;
- (id)specifiers;
- (_Bool)shouldVerifyBeforeAccountSave;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)_navigationTitle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldShowOtherSpecifiersDuringFirstSetup;
- (id)messageForAccountDeletionProgressUI;
- (id)messageForAccountDeletionWarning;
- (id)titleForDeleteButton;
- (long long)deleteButtonIndex;
- (id)valueForAccountSummaryCell;
- (id)displayedShortAccountTypeString;
- (Class)accountInfoControllerClass;
- (id)displayedAccountTypeString;
- (void)forceMailSetup;
- (id)init;

@end

