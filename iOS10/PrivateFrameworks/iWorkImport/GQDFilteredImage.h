//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDImageBinary, NSString;

__attribute__((visibility("hidden")))
@interface GQDFilteredImage : NSObject <GQDNameMappable>
{
    GQDImageBinary *mOriginalImageBinary;
    GQDImageBinary *mFilteredImageBinary;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (id)imageBinary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

