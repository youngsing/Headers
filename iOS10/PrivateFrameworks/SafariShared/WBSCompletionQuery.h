//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest;

@interface WBSCompletionQuery : NSObject
{
    NSString *_normalizedQueryStringForParsec;
    _Bool _forLastSearch;
    NSString *_queryString;
    NSString *_parsecCompletionString;
    NSString *_rewrittenQueryStringFromParsec;
    long long _queryID;
    unsigned long long _triggerEvent;
    NSString *_parsecFeedbackQueryIdentifier;
    NSURLRequest *_parsecSearchRequest;
    time_point_e708cccf _timestamp;
    NSString *_searchSuggestionProviderIdentifier;
    duration_6174cf92 _searchSuggestionProviderLatency;
    duration_6174cf92 _parsecLatency;
    unsigned long long _indexInFeedbackArray;
}

+ (void)initialize;
@property(nonatomic) unsigned long long indexInFeedbackArray; // @synthesize indexInFeedbackArray=_indexInFeedbackArray;
@property(nonatomic) duration_6174cf92 parsecLatency; // @synthesize parsecLatency=_parsecLatency;
@property(nonatomic) duration_6174cf92 searchSuggestionProviderLatency; // @synthesize searchSuggestionProviderLatency=_searchSuggestionProviderLatency;
@property(copy, nonatomic) NSString *searchSuggestionProviderIdentifier; // @synthesize searchSuggestionProviderIdentifier=_searchSuggestionProviderIdentifier;
@property(readonly, nonatomic) time_point_e708cccf timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSURLRequest *parsecSearchRequest; // @synthesize parsecSearchRequest=_parsecSearchRequest;
@property(copy, nonatomic) NSString *parsecFeedbackQueryIdentifier; // @synthesize parsecFeedbackQueryIdentifier=_parsecFeedbackQueryIdentifier;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(nonatomic) long long queryID; // @synthesize queryID=_queryID;
@property(copy, nonatomic) NSString *rewrittenQueryStringFromParsec; // @synthesize rewrittenQueryStringFromParsec=_rewrittenQueryStringFromParsec;
@property(copy, nonatomic) NSString *parsecCompletionString; // @synthesize parsecCompletionString=_parsecCompletionString;
@property(nonatomic, getter=isForLastSearch) _Bool forLastSearch; // @synthesize forLastSearch=_forLastSearch;
@property(readonly, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *normalizedQueryStringForParsec;
- (id)description;
- (id)initWithQueryString:(id)arg1;

@end

