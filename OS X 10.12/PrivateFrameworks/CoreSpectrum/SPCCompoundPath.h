//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpectrum/SPCPath.h>

@class NSMutableArray;

@interface SPCCompoundPath : SPCPath
{
    long long _operation;
    NSMutableArray *_subpaths;
}

+ (id)pathWithSubpaths:(id)arg1 operation:(long long)arg2;
@property(retain, nonatomic) NSMutableArray *subpaths; // @synthesize subpaths=_subpaths;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (id)logicalPathToEnvironment;
- (struct CGRect)bounds;
- (struct CGPath *)computedPathInRect:(struct CGRect)arg1;
- (void)removeObjectFromSubpathsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSubpathsAtIndex:(unsigned long long)arg2;
- (void)addSubpath:(id)arg1;
- (void)transformUsingAffineTransform:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubpaths:(id)arg1 operation:(long long)arg2;

@end

