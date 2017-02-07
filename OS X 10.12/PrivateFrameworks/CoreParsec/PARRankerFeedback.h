//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFRankingFeedback.h>

#import <CoreParsec/NSCopying-Protocol.h>
#import <CoreParsec/NSSecureCoding-Protocol.h>

@interface PARRankerFeedback : SFRankingFeedback <NSSecureCoding, NSCopying>
{
    BOOL _didTimeOut;
    unsigned long long _resultsRanked;
    unsigned long long _rankingDurationMilliseconds;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long rankingDurationMilliseconds; // @synthesize rankingDurationMilliseconds=_rankingDurationMilliseconds;
@property(nonatomic) unsigned long long resultsRanked; // @synthesize resultsRanked=_resultsRanked;
@property(nonatomic) BOOL didTimeOut; // @synthesize didTimeOut=_didTimeOut;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
