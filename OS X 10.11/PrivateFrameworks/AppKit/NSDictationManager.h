//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSDictationManager : NSObject
{
    long long _lastNotifiedState;
    struct __TISInputSource *_cachedInputSourceRef;
    BOOL _menuKeyEquivalentNeedsUpdating;
}

+ (id)createDictationMenuItem;
+ (BOOL)isDictationSupported;
+ (id)defaultManager;
- (struct __TISInputSource *)_inputSourceRef;
- (BOOL)_dictationIsAllowed;
- (BOOL)_dictationIsEnabled;
- (void)_dictationKeyChanged;
- (void)_updateKeyEquivalentForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)dictationItemSelected:(id)arg1;
- (void)dealloc;
- (id)init;

@end

