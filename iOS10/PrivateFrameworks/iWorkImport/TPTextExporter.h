//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKExporter-Protocol.h>

@class NSString, TPDocumentRoot, TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TPTextExporter : NSObject <TSKExporter>
{
    TPDocumentRoot *mDocumentRoot;
    _Bool mIsCancelled;
    TSUProgressContext *mProgressContext;
}

@property(retain) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (_Bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDocumentRoot:(id)arg1;
- (void)dealloc;
- (void)quit;
- (void)cancel;
- (_Bool)isCancelled;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

