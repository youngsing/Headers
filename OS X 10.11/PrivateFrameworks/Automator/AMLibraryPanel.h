//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class AMLibraryViewController;

@interface AMLibraryPanel : NSPanel
{
    AMLibraryViewController *_libraryViewController;
}

+ (id)sharedLibraryPanel;
- (void)displayVariables:(id)arg1;
- (void)displayActions:(id)arg1;
- (void)displayActionsByCategory:(id)arg1;
- (void)displayActionsByApplication:(id)arg1;
- (id)selectedVariables;
- (id)selectedActions;
- (void)close;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

