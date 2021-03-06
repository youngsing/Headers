//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSEmailAddress, NSString;

@interface EWSMailboxData : NSObject <XSDefinitionProvider>
{
    BOOL _ExcludeConflicts;
    EWSEmailAddress *_Email;
    long long _AttendeeType;
}

+ (id)definition;
@property(nonatomic) BOOL ExcludeConflicts; // @synthesize ExcludeConflicts=_ExcludeConflicts;
@property(nonatomic) long long AttendeeType; // @synthesize AttendeeType=_AttendeeType;
@property(retain, nonatomic) EWSEmailAddress *Email; // @synthesize Email=_Email;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

