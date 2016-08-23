//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSTabViewControllerUIProvider;

__attribute__((visibility("hidden")))
@interface _NSTabViewControllerPrivateData : NSObject
{
    long long _selectedTabViewItemIndex;
    unsigned long long _transitionOptions;
    long long _tabStyle;
    NSMutableArray *_tabViewItems;
    id <NSTabViewControllerUIProvider> _UIProvider;
    struct {
        unsigned int settingTabViewItems:1;
        unsigned int canPropagateSelectedChildViewControllerTitle:1;
        unsigned int ibWillSetTabViewItems:1;
        unsigned int _reserved:29;
    } _flags;
}

@property(retain) id <NSTabViewControllerUIProvider> UIProvider; // @synthesize UIProvider=_UIProvider;
@property long long tabStyle; // @synthesize tabStyle=_tabStyle;
@property unsigned long long transitionOptions; // @synthesize transitionOptions=_transitionOptions;
@property long long selectedTabViewItemIndex; // @synthesize selectedTabViewItemIndex=_selectedTabViewItemIndex;
@property(retain) NSMutableArray *tabViewItems; // @synthesize tabViewItems=_tabViewItems;
- (void)dealloc;

@end

