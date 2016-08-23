//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSToolbar;

@interface _NSToolbarItemPlaceholder : NSObject
{
    NSString *_itemIdentifier;
    NSToolbar *_tb;
    long long _visibilityPriority;
    BOOL _hasCustomVisibilityPriority;
    id _propertyListRepresentation;
}

@property(retain, nonatomic) id propertyListRepresentation; // @synthesize propertyListRepresentation=_propertyListRepresentation;
- (BOOL)_hasCustomVisibilityPriority;
- (long long)visibilityPriority;
- (void)setVisibilityPriority:(long long)arg1;
- (id)toolbar;
- (void)_setToolbar:(id)arg1;
- (id)itemIdentifier;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1;

@end

