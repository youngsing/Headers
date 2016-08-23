//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MKTransitSectionPagingFilter : NSObject
{
    BOOL _limitNumCells;
    BOOL _limitNumLines;
    unsigned long long _maxNumCells;
    unsigned long long _numLinesFallbackThreshold;
    unsigned long long _numLinesFallbackValue;
}

+ (id)defaultFilterForInactiveLines;
+ (id)defaultFilterForSequences:(id)arg1;
@property(nonatomic) unsigned long long numLinesFallbackValue; // @synthesize numLinesFallbackValue=_numLinesFallbackValue;
@property(nonatomic) unsigned long long numLinesFallbackThreshold; // @synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold;
@property(nonatomic) BOOL limitNumLines; // @synthesize limitNumLines=_limitNumLines;
@property(nonatomic) unsigned long long maxNumCells; // @synthesize maxNumCells=_maxNumCells;
@property(nonatomic) BOOL limitNumCells; // @synthesize limitNumCells=_limitNumCells;

@end

