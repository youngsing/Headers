//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedElement-Protocol.h>
#import <NewsCore/FCFeedGroupOutlining-Protocol.h>

@class FCFeedDescriptor, FCFeedEdition, NSArray, NSDate, NSString;
@protocol FCFeedTheming;

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining>
{
    _Bool _isFirstFromEdition;
    NSString *_identifier;
    NSString *_sourceIdentifier;
    NSDate *_creationDate;
    unsigned long long _options;
    unsigned long long _mergeID;
    long long _groupType;
    NSArray *_elements;
    NSArray *_headlines;
    NSString *_name;
    id <FCFeedTheming> _theme;
    FCFeedDescriptor *_L2FeedDescriptor;
    FCFeedEdition *_edition;
}

+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;
@property(readonly, nonatomic) _Bool isFirstFromEdition; // @synthesize isFirstFromEdition=_isFirstFromEdition;
@property(readonly, copy, nonatomic) FCFeedEdition *edition; // @synthesize edition=_edition;
@property(readonly, copy, nonatomic) FCFeedDescriptor *L2FeedDescriptor; // @synthesize L2FeedDescriptor=_L2FeedDescriptor;
@property(readonly, copy, nonatomic) id <FCFeedTheming> theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property(readonly, copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) unsigned long long mergeID; // @synthesize mergeID=_mergeID;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isGap;
@property(readonly, nonatomic) long long feedElementType;
@property(readonly, copy, nonatomic) NSString *backingTagID;
@property(readonly, nonatomic) _Bool hasStrictHeadlineOrder;
@property(readonly, nonatomic) _Bool canBeExtended;
- (id)copyWithEdition:(id)arg1 isFirst:(_Bool)arg2;
- (id)copyWithMergeID:(unsigned long long)arg1;
- (id)copyWithElements:(id)arg1;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 name:(id)arg3 theme:(id)arg4 L2FeedDescriptor:(id)arg5 elements:(id)arg6 options:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 name:(id)arg4 theme:(id)arg5 L2FeedDescriptor:(id)arg6 elements:(id)arg7 options:(unsigned long long)arg8;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 name:(id)arg5 theme:(id)arg6 L2FeedDescriptor:(id)arg7 edition:(id)arg8 isFirstFromEdition:(_Bool)arg9 elements:(id)arg10 options:(unsigned long long)arg11 mergeID:(unsigned long long)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

