//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface DiagnosticsProcessReportGenerator : NSObject
{
    NSArray *_processes;
}

- (void).cxx_destruct;
- (id)askUserPermissionToDiscloseURLs;
- (void)_appendProcessIdentifiersOfTabs:(id)arg1 toDictionary:(id)arg2;
- (id)filteredArrayRepresentationExceptForURLs:(id)arg1;
- (id)selectMostInterestingURLs:(unsigned long long)arg1;
- (id)_initWithLastSession:(id)arg1 skipProcessDataCollection:(BOOL)arg2;
- (id)initWithLastSession:(id)arg1;
- (void)_scoreElementsForKey:(id)arg1;
- (void)_calculateAverage:(double *)arg1 andStandardDeviation:(double *)arg2 forKey:(id)arg3;

@end
