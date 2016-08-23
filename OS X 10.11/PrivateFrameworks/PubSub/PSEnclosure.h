//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL, PSEntry;

@interface PSEnclosure : NSObject
{
    id _internal;
}

@property(readonly, retain) NSString *MIMEType;
@property(readonly, retain) NSURL *URL;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct EnclosureCore *)_enclosureCore;
- (void)deleteDownload;
- (void)cancelDownload;
@property(readonly) NSString *downloadedPath;
@property(readonly) NSError *downloadError;
@property(readonly) double downloadProgress;
@property(readonly) int downloadState;
- (BOOL)download:(id *)arg1;
@property(readonly) long long length;
@property(readonly) PSEntry *entry;
- (void)_setClient:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)_initWithCore:(struct EnclosureCore *)arg1;
- (id)initWithPath:(id)arg1 MIMEType:(id)arg2;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 length:(long long)arg3;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 name:(id)arg3 extension:(id)arg4;

@end

