//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHAPhotoLibraryReference : NSObject
{
    NSString *_path;
}

@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToPhotoLibraryReference:(id)arg1;
- (id)initWithLibraryURL:(id)arg1;
- (id)init;

@end

