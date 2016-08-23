//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSURL;

@interface NSMovie : NSObject <NSCoding>
{
    void *_movie;
    NSURL *_url;
    struct {
        unsigned int dispose:1;
        unsigned int reserved:31;
    } _movieFlags;
    long long _reserved1;
    long long _reserved2;
}

+ (void)initialize;
+ (Class)_QTMovieClass;
+ (void)_loadQTKit;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)QTMovie;
- (void)finalize;
- (void)dealloc;
- (id)initWithMovie:(id)arg1;

@end
