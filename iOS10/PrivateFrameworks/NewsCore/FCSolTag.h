//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCSolConfiguration, FCSolTagID, NSMutableSet;

@interface FCSolTag : NSObject
{
    FCSolTagID *_tagId;
    NSMutableSet *_articles;
    NSMutableSet *_solos;
    double _score;
    FCSolConfiguration *_config;
}

@property(retain, nonatomic) FCSolConfiguration *config; // @synthesize config=_config;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSMutableSet *solos; // @synthesize solos=_solos;
@property(retain, nonatomic) NSMutableSet *articles; // @synthesize articles=_articles;
@property(retain, nonatomic) FCSolTagID *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (id)initWithTagId:(id)arg1 articles:(id)arg2;

@end

