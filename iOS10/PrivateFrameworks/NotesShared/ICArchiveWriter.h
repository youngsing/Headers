//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ICArchiveWriter : NSObject
{
    struct archive *_archive;
    _Bool _usesCompression;
    NSURL *_destinationURL;
    NSString *_basePath;
}

@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) _Bool usesCompression; // @synthesize usesCompression=_usesCompression;
- (void).cxx_destruct;
- (_Bool)writeURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;
- (_Bool)open:(id *)arg1;
- (_Bool)finish:(id *)arg1;
- (_Bool)writeURLs:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2;

@end

