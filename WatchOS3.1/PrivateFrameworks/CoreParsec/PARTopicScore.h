//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PARTopicScore : NSObject
{
    unsigned long long _topic;
    double _score;
}

+ (id)responseFromJSON:(id)arg1;
+ (id)topicScoreForTopic:(unsigned long long)arg1 score:(double)arg2;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned long long topic; // @synthesize topic=_topic;
- (id)initWithTopicScore:(unsigned long long)arg1 score:(double)arg2;

@end

