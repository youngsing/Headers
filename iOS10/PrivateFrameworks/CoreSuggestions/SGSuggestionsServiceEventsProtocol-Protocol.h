//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsObserverProtocol-Protocol.h>

@class EKEventStore, NSArray, NSString, SGEvent;

@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceEventsObserverProtocol>
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)allEventsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)eventsForSchemas:(NSArray *)arg1 usingStore:(EKEventStore *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)keysForSchemas:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)eventFromUniqueId:(NSString *)arg1 withCompletion:(void (^)(SGEvent *, NSError *))arg2;
- (SGEvent *)eventFromUniqueId:(NSString *)arg1 error:(id *)arg2;
@end

