//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem
{
    NSMutableSet *_versionStringsSupported;
}

- (void).cxx_destruct;
- (id)copyParseRules;
- (BOOL)supportsVersion:(id)arg1;
- (void)addVersionSupported:(id)arg1;
- (id)init;

@end
