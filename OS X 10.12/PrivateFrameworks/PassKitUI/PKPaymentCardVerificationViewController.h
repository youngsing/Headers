//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <PassKitUI/NSTableViewDataSource-Protocol.h>
#import <PassKitUI/NSTableViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupFieldViewDelegate-Protocol.h>

@class NSStackView, NSString, NSTableView, NSTextField, NSView, PKPaymentPass, PKPaymentSetupFieldsModel, PKPaymentSetupViewController, PKPaymentWebService, PKVerificationRequestRecord;
@protocol PKPaymentVerificationMethodsDelegate;

@interface PKPaymentCardVerificationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, PKPaymentSetupFieldViewDelegate>
{
    BOOL _nextButtonEnabled;
    PKPaymentSetupViewController *_setupVC;
    id <PKPaymentVerificationMethodsDelegate> _delegate;
    PKVerificationRequestRecord *_verificationRecord;
    NSView *_verificationFieldsView;
    NSView *_verificationMethodView;
    NSView *_verificationCodeView;
    NSView *_verificationInfoView;
    NSTextField *_enterCodeTitleLabel;
    NSTextField *_chooseMethodTitleLabel;
    NSTextField *_setupFieldsTitleLabel;
    PKPaymentPass *_pass;
    PKPaymentWebService *_paymentWebService;
    long long _context;
    unsigned long long _selectedIndex;
    NSTableView *_tableView;
    NSTextField *_verificationInfoViewTitle;
    NSTextField *_verificationInfoViewSubtitle;
    NSTextField *_verificationCodeTypeLabel;
    NSTextField *_verificationCodeDestinationLabel;
    NSTextField *_verificationCodeField;
    NSStackView *_verificationFieldsStackView;
    PKPaymentSetupFieldsModel *_fieldsModel;
}

@property BOOL nextButtonEnabled; // @synthesize nextButtonEnabled=_nextButtonEnabled;
@property(retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // @synthesize fieldsModel=_fieldsModel;
@property(retain) NSStackView *verificationFieldsStackView; // @synthesize verificationFieldsStackView=_verificationFieldsStackView;
@property(retain) NSTextField *verificationCodeField; // @synthesize verificationCodeField=_verificationCodeField;
@property(retain) NSTextField *verificationCodeDestinationLabel; // @synthesize verificationCodeDestinationLabel=_verificationCodeDestinationLabel;
@property(retain) NSTextField *verificationCodeTypeLabel; // @synthesize verificationCodeTypeLabel=_verificationCodeTypeLabel;
@property(retain) NSTextField *verificationInfoViewSubtitle; // @synthesize verificationInfoViewSubtitle=_verificationInfoViewSubtitle;
@property(retain) NSTextField *verificationInfoViewTitle; // @synthesize verificationInfoViewTitle=_verificationInfoViewTitle;
@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property long long context; // @synthesize context=_context;
@property(retain) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(retain) NSTextField *setupFieldsTitleLabel; // @synthesize setupFieldsTitleLabel=_setupFieldsTitleLabel;
@property(retain) NSTextField *chooseMethodTitleLabel; // @synthesize chooseMethodTitleLabel=_chooseMethodTitleLabel;
@property(retain) NSTextField *enterCodeTitleLabel; // @synthesize enterCodeTitleLabel=_enterCodeTitleLabel;
@property(retain) NSView *verificationInfoView; // @synthesize verificationInfoView=_verificationInfoView;
@property(retain) NSView *verificationCodeView; // @synthesize verificationCodeView=_verificationCodeView;
@property(retain) NSView *verificationMethodView; // @synthesize verificationMethodView=_verificationMethodView;
@property(retain) NSView *verificationFieldsView; // @synthesize verificationFieldsView=_verificationFieldsView;
@property(retain) PKVerificationRequestRecord *verificationRecord; // @synthesize verificationRecord=_verificationRecord;
@property __weak id <PKPaymentVerificationMethodsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak PKPaymentSetupViewController *setupVC; // @synthesize setupVC=_setupVC;
- (void).cxx_destruct;
- (void)_showActivationError:(id)arg1;
- (void)_showSendCodeError:(id)arg1;
- (void)_showRequestError:(id)arg1;
- (BOOL)_showSetupAssistantVerificationAlertForRecord:(id)arg1 pass:(id)arg2;
- (id)_currentWindow;
- (id)verificationBodyString;
- (id)verificationTitleString;
- (id)_detailTextLabelForChannel:(id)arg1;
- (void)radioButtonAction:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_downloadAndAddPassWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitVerificationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performVerificationUpdateRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchVerificationOptionsAtStep:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)submitCodeAction:(id)arg1;
- (void)didNotReceiveCodeAction:(id)arg1;
- (void)selectDifferentVerificationOptionAction:(id)arg1;
- (void)nextButton:(id)arg1;
- (void)setupFieldViewValueDidChange:(id)arg1;
- (void)_showVerificationCompletion;
- (void)_showVerificationMethods;
- (void)_showVerificationFields;
- (void)_showVerificationUI;
- (void)_loadVerificationOptionsAtStep:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (id)nibBundle;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
