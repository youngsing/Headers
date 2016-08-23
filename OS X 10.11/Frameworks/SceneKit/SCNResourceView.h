//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSSegmentedControl;

__attribute__((visibility("hidden")))
@interface SCNResourceView : NSView
{
    NSView *_mainView;
    NSView *_container;
    NSView *_packerView;
    NSView *_textureView;
    NSView *_packerContainer;
    NSView *_textureContainer;
    NSSegmentedControl *_resourceType;
    struct __C3DResourceManager *_mngr;
}

- (void)setOpenGLContext:(id)arg1;
- (void)setResourceManager:(struct __C3DResourceManager *)arg1;
- (void)resourceTypeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMode:(int)arg1;

@end

