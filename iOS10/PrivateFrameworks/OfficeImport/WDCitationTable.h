//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCitationTable : NSObject
{
    WDDocument *mDocument;
    NSMutableDictionary *mCitations;
}

- (id)description;
- (id)citationIDs;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationFor:(id)arg1;
- (unsigned long long)count;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)dealloc;

@end

