//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSString, QTFormatDescription;

__attribute__((visibility("hidden")))
@interface QTCaptureConnectionInternal : NSObject
{
    id owner;
    struct OpaqueCMIOGraph *graph;
    int node;
    unsigned int element;
    unsigned int scope;
    CDStruct_ef8ba820 *extendedNodeInfo;
    NSString *mediaType;
    QTFormatDescription *formatDescription;
    NSMutableDictionary *attributes;
    NSCountedSet *attributeChangeRefCounts;
    BOOL enabled;
}

@end

