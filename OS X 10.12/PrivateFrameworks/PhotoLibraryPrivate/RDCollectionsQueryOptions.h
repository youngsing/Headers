//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/NSCopying-Protocol.h>

@class NSArray;

@interface RDCollectionsQueryOptions : NSObject <NSCopying>
{
    NSArray *_loadProperties;
    NSArray *_additionalChangeProperties;
    unsigned long long _fetchLimit;
}

@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) NSArray *additionalChangeProperties; // @synthesize additionalChangeProperties=_additionalChangeProperties;
@property(retain, nonatomic) NSArray *loadProperties; // @synthesize loadProperties=_loadProperties;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
