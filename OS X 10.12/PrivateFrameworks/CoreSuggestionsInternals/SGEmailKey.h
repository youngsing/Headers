//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessageKey.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGEmailKey : SGMessageKey <SGEntityKey>
{
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
@property(readonly) NSString *messageId; // @dynamic messageId;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToEmailKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)toMailMessageKey;
- (id)initWithMailMessageKey:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
