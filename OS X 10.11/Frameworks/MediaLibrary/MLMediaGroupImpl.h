//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLMediaGroup, MLMediaLibrary, NSArray, NSData, NSDictionary;

@interface MLMediaGroupImpl : NSObject
{
    BOOL _mediaObjectsRequested;
    BOOL _iconImageDataRequested;
    MLMediaLibrary *_mediaLibrary;
    MLMediaGroup *_parent;
    NSArray *_childGroups;
    NSArray *_mediaObjects;
    NSDictionary *_attributes;
    NSData *_iconImageData;
}

@property(retain, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(retain, nonatomic) NSArray *childGroups; // @synthesize childGroups=_childGroups;
@property(nonatomic) MLMediaGroup *parent; // @synthesize parent=_parent;
@property(nonatomic) MLMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(nonatomic) BOOL iconImageDataRequested; // @synthesize iconImageDataRequested=_iconImageDataRequested;
@property(nonatomic) BOOL mediaObjectsRequested; // @synthesize mediaObjectsRequested=_mediaObjectsRequested;
- (void)dealloc;

@end

