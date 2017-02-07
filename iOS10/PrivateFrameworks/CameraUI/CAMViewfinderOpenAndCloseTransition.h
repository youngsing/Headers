//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSnapshotView, CAMViewfinderView;

@interface CAMViewfinderOpenAndCloseTransition : NSObject
{
    CAMViewfinderView *__viewfinderView;
    CAMSnapshotView *__snapshotView;
}

@property(retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView; // @synthesize _snapshotView=__snapshotView;
@property(readonly, nonatomic) __weak CAMViewfinderView *_viewfinderView; // @synthesize _viewfinderView=__viewfinderView;
- (void).cxx_destruct;
- (void)closeAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)openAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_closeViewfinder:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(_Bool)arg1 removedOnCompletion:(_Bool)arg2;
- (id)initWithViewfinderView:(id)arg1;

@end
