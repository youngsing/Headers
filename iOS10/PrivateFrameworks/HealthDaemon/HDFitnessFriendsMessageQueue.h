//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HDFitnessFriendsMessageQueue : NSObject
{
    NSMutableDictionary *_identifierToMessageDictionary;
    struct __CFString *_domainName;
    struct __CFString *_queueName;
}

- (void).cxx_destruct;
- (void)_synchronizePreferences;
- (void)removeMessageWithIdentifier:(id)arg1;
- (void)setMessage:(id)arg1 identifier:(id)arg2;
- (void)enumerateQueuedMessagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)messageWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithQueueName:(id)arg1;
- (id)init;

@end

