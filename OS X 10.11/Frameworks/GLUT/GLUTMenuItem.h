//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GLUTMenu, NSString;

__attribute__((visibility("hidden")))
@interface GLUTMenuItem : NSObject
{
    NSString *_title;
    GLUTMenu *_submenu;
    int _tag;
    BOOL _isTrigger;
}

- (BOOL)isTrigger;
- (void)setTag:(int)arg1;
- (int)tag;
- (void)setMenu:(id)arg1;
- (id)menu;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)finalize;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 menu:(id)arg2;
- (id)initWithTitle:(id)arg1 tag:(int)arg2;

@end

