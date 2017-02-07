//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSCompletionListItem-Protocol.h>

@class NSString, SFSearchResult;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionListItem : NSObject <WBSCompletionListItem>
{
    NSString *_domainIdentifier;
    SFSearchResult *_sfSearchResult;
}

+ (id)itemForNavigationToURL;
+ (id)itemForSearchEngineSearch;
- (void).cxx_destruct;
- (id)_initWithDomainIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(readonly) Class superclass;

@end
