//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLVertexDescriptor, NSArray;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMetalMesh : NSObject
{
    long long _mutabilityTimestamp;
    unsigned long long vertexLayoutHash;
    NSArray *_buffers;
    NSArray *_elements;
    MTLVertexDescriptor *_vertexDescriptor;
    id <MTLBuffer> _volatileBuffer;
    long long volatileOffset;
    long long volatileStride;
}

@property(nonatomic) long long volatileStride; // @synthesize volatileStride;
@property(nonatomic) long long volatileOffset; // @synthesize volatileOffset;
@property(retain, nonatomic) id <MTLBuffer> volatileBuffer; // @synthesize volatileBuffer=_volatileBuffer;
@property(retain, nonatomic) MTLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSArray *buffers; // @synthesize buffers=_buffers;
@property(nonatomic) unsigned long long vertexLayoutHash; // @synthesize vertexLayoutHash;
- (void)dealloc;

@end

