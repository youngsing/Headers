//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject
{
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription *formatDescription;
    BOOL enabled;
    struct OpaqueCMIOGraph *graph;
    int node;
    unsigned int element;
    unsigned int scope;
    int mixerNode;
    unsigned int mixerElement;
    unsigned int mixerScope;
    BOOL mixerIsReadOnly;
    struct OpaqueCMClock *clock;
    void *callbackContextToken;
}

@end

