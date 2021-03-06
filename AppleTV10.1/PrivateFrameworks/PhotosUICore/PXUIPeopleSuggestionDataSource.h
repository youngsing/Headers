//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleSuggestionManagerDataSource-Protocol.h>

@class NSMutableSet, NSString;

@interface PXUIPeopleSuggestionDataSource : NSObject <PXPeopleSuggestionManagerDataSource>
{
    NSMutableSet *_cancelledTokens;
}

@property(retain, nonatomic) NSMutableSet *cancelledTokens; // @synthesize cancelledTokens=_cancelledTokens;
- (void).cxx_destruct;
- (void)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;
- (_Bool)cancelSuggestionForPerson:(id)arg1 withToken:(long long)arg2 error:(id *)arg3;
- (long long)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

