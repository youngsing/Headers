//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOpenGLView.h>

@class NSPopUpButton;

__attribute__((visibility("hidden")))
@interface SCNResourceTextureView : NSOpenGLView
{
    NSPopUpButton *_textureIndex;
    struct __C3DResourceManager *_mngr;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)beginOrtho;
- (void)setResourceManager:(struct __C3DResourceManager *)arg1;
- (void)awakeFromNib;
- (void)autoUpdate;

@end

