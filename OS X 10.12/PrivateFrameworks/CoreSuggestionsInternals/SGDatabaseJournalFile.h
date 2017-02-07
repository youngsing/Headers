//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDatabaseJournalFile : NSObject
{
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void).cxx_destruct;
- (id)description;
- (void)unlink;
- (void)clear;
- (id)read;
- (void)write:(id)arg1;
- (void)dealloc;
- (void)destroyAndUnlinkIfEmpty;
- (void)destroy;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
