//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface MCDBrowserIdentifiers : NSObject
{
    NSArray *_cellIdentifiers;
    NSArray *_orderedIdentifiers;
    NSSet *_activeIdentifiers;
    double _maxImageWidth;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) double maxImageWidth; // @synthesize maxImageWidth=_maxImageWidth;
@property(retain, nonatomic) NSSet *activeIdentifiers; // @synthesize activeIdentifiers=_activeIdentifiers;
@property(retain, nonatomic) NSArray *orderedIdentifiers; // @synthesize orderedIdentifiers=_orderedIdentifiers;
@property(retain, nonatomic) NSArray *cellIdentifiers; // @synthesize cellIdentifiers=_cellIdentifiers;
- (void).cxx_destruct;
- (id)localizedStrings;
- (void)_updateCellIdentifiersOrdering;
- (_Bool)_identifiersDidChange;
- (id)defaultFuseIdentifiers;
- (id)MCDIdentifiersMusicIdentifiersMapping;

@end

