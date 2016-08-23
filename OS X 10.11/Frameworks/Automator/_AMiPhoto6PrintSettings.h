//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSDate, NSString;

@interface _AMiPhoto6PrintSettings : SBObject
{
}

- (void)stopSlideshow;
- (void)startSlideshowAsynchronous:(long long)arg1 displayIndex:(long long)arg2 iChat:(long long)arg3 usingAlbum:(id)arg4;
- (void)select;
- (void)resumeSlideshow;
- (void)removeFrom:(id)arg1;
- (void)previousSlide;
- (void)pauseSlideshow;
- (void)nextSlide;
- (id)newAlbumName:(id)arg1;
- (void)importFrom:(id)arg1 forceCopy:(long long)arg2 to:(id)arg3;
- (void)emptyTrash;
- (void)duplicateTo:(id)arg1;
- (void)autoImport;
- (void)assignKeywordString:(id)arg1;
- (void)addTo:(id)arg1;
- (void)saveAs:(id)arg1 in:(id)arg2;
- (void)moveTo:(id)arg1;
- (BOOL)exists;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(copy) NSString *targetPrinter;
@property(copy) NSString *faxNumber;
@property int errorHandling;
@property(copy) NSDate *requestedPrintTime;
@property long long pagesDown;
@property long long pagesAcross;
@property long long endingPage;
@property long long startingPage;
@property BOOL collating;
@property long long copies;

@end

