//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSLocale, NSString;
@protocol NSObject><NSCopying;

@interface AVMetadataItemInternal : NSObject
{
    struct OpaqueFigMetadataReader *reader;
    long long itemIndex;
    NSString *identifier;
    NSString *keySpace;
    id <NSObject><NSCopying> key;
    NSString *commonKey;
    NSLocale *locale;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    id <NSObject><NSCopying> value;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    NSDate *startDate;
    NSString *dataType;
    NSDictionary *extras;
}

@end

