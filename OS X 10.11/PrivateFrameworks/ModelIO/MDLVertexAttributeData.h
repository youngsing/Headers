//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject
{
    MDLMeshBufferMap *_map;
    void *_dataStart;
    unsigned long long _stride;
    unsigned long long _format;
}

@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) unsigned long long stride; // @synthesize stride=_stride;
@property(nonatomic) void *dataStart; // @synthesize dataStart=_dataStart;
@property(retain, nonatomic) MDLMeshBufferMap *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (id)init;

@end

