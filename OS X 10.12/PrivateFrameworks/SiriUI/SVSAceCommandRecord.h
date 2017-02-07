//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SAAceCommand, SVSAceCommandRecordDelegate;

__attribute__((visibility("hidden")))
@interface SVSAceCommandRecord : NSObject
{
    id <SAAceCommand> _aceCommand;
    long long _result;
    long long _numberOfStartedActions;
    long long _numberOfSuccessfullyCompletedActions;
    long long _numberOfUnsuccessfullyCompletedActions;
    id <SVSAceCommandRecordDelegate> _delegate;
}

@property(nonatomic) __weak id <SVSAceCommandRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setNumberOfUnsuccessfullyCompletedActions:) long long numberOfUnsuccessfullyCompletedActions; // @synthesize numberOfUnsuccessfullyCompletedActions=_numberOfUnsuccessfullyCompletedActions;
@property(nonatomic, setter=_setNumberOfSuccessfullyCompletedActions:) long long numberOfSuccessfullyCompletedActions; // @synthesize numberOfSuccessfullyCompletedActions=_numberOfSuccessfullyCompletedActions;
@property(nonatomic, setter=_setNumberOfStartedActions:) long long numberOfStartedActions; // @synthesize numberOfStartedActions=_numberOfStartedActions;
@property(nonatomic, setter=_setResult:) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) id <SAAceCommand> aceCommand; // @synthesize aceCommand=_aceCommand;
- (void).cxx_destruct;
- (void)incrementNumberOfUnsuccessfullyCompletedActions;
- (void)incrementNumberOfSuccessfullyCompletedActions;
- (void)incrementNumberOfStartedActions;
- (id)initWithAceCommand:(id)arg1;

@end
