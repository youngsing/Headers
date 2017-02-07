//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, RWIApplication;
@protocol RWIDrivableDelegate, RWIDriverSession;

__attribute__((visibility("hidden")))
@interface RWIDrivable : NSObject
{
    BOOL _paired;
    NSNumber *_targetIdentifier;
    NSString *_sessionIdentifier;
    RWIApplication *_owningApplication;
    long long _state;
    id <RWIDrivableDelegate> _delegate;
    id <RWIDriverSession> _pairedSession;
}

@property(readonly, nonatomic) id <RWIDriverSession> pairedSession; // @synthesize pairedSession=_pairedSession;
@property(nonatomic) __weak id <RWIDrivableDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isPaired) BOOL paired; // @synthesize paired=_paired;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) RWIApplication *owningApplication; // @synthesize owningApplication=_owningApplication;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSNumber *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
- (void).cxx_destruct;
- (void)sendMessageToFrontend:(id)arg1;
- (void)sendMessageToBackend:(id)arg1;
- (void)unpairWithSession:(id)arg1;
- (void)pairWithSession:(id)arg1;
- (void)updateState:(long long)arg1 isPaired:(BOOL)arg2 toSession:(id)arg3;
- (id)initWithApplication:(id)arg1 sessionIdentifier:(id)arg2 targetIdentifier:(id)arg3 state:(long long)arg4 isPaired:(BOOL)arg5;

@end
