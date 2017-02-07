//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class CLLocation, NSArray, NSDate, NSDictionary, PHPhotoLibrary;

@interface PHMemoryGenerationOptions : NSObject <NSCopying>
{
    unsigned long long _reason;
    NSDate *_date;
    CLLocation *_location;
    NSArray *_peopleNames;
    NSArray *_existingMemories;
    NSArray *_blacklistedMemories;
    NSDictionary *_extraParameters;
    PHPhotoLibrary *_photoLibrary;
}

@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property(retain, nonatomic) NSArray *blacklistedMemories; // @synthesize blacklistedMemories=_blacklistedMemories;
@property(retain, nonatomic) NSArray *existingMemories; // @synthesize existingMemories=_existingMemories;
@property(retain, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
