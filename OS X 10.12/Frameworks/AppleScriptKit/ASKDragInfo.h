//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScriptKit/NSDraggingInfo-Protocol.h>

@class NSString;

@interface ASKDragInfo : NSObject <NSDraggingInfo>
{
    id _sender;
}

+ (id)dragInfoWithSender:(id)arg1;
- (id)objectSpecifier;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
- (long long)draggingSequenceNumber;
- (id)draggingSource;
- (id)draggingPasteboard;
- (id)draggedImage;
- (struct CGPoint)draggedImageLocation;
- (struct CGPoint)draggingLocation;
- (unsigned long long)draggingSourceOperationMask;
- (id)draggingDestinationWindow;
- (void)setSender:(id)arg1;
- (id)sender;
- (void)dealloc;
- (id)initWithSender:(id)arg1;
- (id)init;

// Remaining properties
@property BOOL animatesToDestination;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property long long draggingFormation;
@property(readonly) unsigned long long hash;
@property long long numberOfValidItemsForDrop;
@property(readonly) long long springLoadingHighlight;
@property(readonly) Class superclass;

@end

