//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject, NSString;
@protocol SGSuggestionsServiceMessagesProtocol;

@protocol SGMessagesSuggestionsServiceDelegate
- (NSArray *)suggestionsService:(NSObject<SGSuggestionsServiceMessagesProtocol> *)arg1 needsContextForConversationIdentifier:(NSString *)arg2 numberOfMessagesNeeded:(unsigned long long)arg3;
@end

