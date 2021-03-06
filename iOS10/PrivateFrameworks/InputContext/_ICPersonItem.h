//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InputContext/_ICPredictedItem.h>

@class NSData, NSString;

@interface _ICPersonItem : _ICPredictedItem
{
    _Bool _isFirstPerson;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_localizedFullName;
    NSString *_label;
    NSString *_source;
    NSData *_imageData;
}

@property(readonly, nonatomic) _Bool isFirstPerson; // @synthesize isFirstPerson=_isFirstPerson;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *localizedFullName; // @synthesize localizedFullName=_localizedFullName;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 proactiveTrigger:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 localizedFullName:(id)arg6 label:(id)arg7 value:(id)arg8 source:(id)arg9 imageData:(id)arg10 isFirstPerson:(_Bool)arg11;

@end

