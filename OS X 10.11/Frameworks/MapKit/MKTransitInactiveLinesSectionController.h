//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController
{
    BOOL _linesWithServiceResumesDataOnly;
    NSArray *_inactiveLines;
}

@property(nonatomic) BOOL linesWithServiceResumesDataOnly; // @synthesize linesWithServiceResumesDataOnly=_linesWithServiceResumesDataOnly;
- (void).cxx_destruct;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
@property(readonly, nonatomic) NSArray *inactiveLines; // @synthesize inactiveLines=_inactiveLines;
- (id)init;

@end

