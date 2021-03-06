//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPListItem;

@interface CPList : NSObject <CPDisposable>
{
    struct CGRect spacer;
    int type;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPListItem *parentItem;
    struct __CFArray *items;
}

@property(retain, nonatomic) CPListItem *parentItem; // @synthesize parentItem;
@property(nonatomic) unsigned int ordinalSuffixLength; // @synthesize ordinalSuffixLength;
@property(nonatomic) unsigned int ordinalPrefixLength; // @synthesize ordinalPrefixLength;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) struct CGRect spacer; // @synthesize spacer;
- (_Bool)isMultilevel;
- (_Bool)containsParagraph:(id)arg1;
- (void)addItem:(id)arg1;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;

@end

