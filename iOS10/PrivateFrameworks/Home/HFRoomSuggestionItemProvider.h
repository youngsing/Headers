//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSSet;
@protocol HFRoomSuggestionVendor;

@interface HFRoomSuggestionItemProvider : HFItemProvider
{
    unsigned long long _suggestedRoomLimit;
    NSSet *_suggestionItems;
    id <HFRoomSuggestionVendor> _suggestionVendor;
}

@property(retain, nonatomic) id <HFRoomSuggestionVendor> suggestionVendor; // @synthesize suggestionVendor=_suggestionVendor;
@property(retain, nonatomic) NSSet *suggestionItems; // @synthesize suggestionItems=_suggestionItems;
@property(nonatomic) unsigned long long suggestedRoomLimit; // @synthesize suggestedRoomLimit=_suggestedRoomLimit;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)arg1;

@end

