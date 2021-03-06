//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRChildrenHashNode : NSObject
{
    SCRUIElement *_uiElement;
    unsigned long long *_childrenCount;
    unsigned long long _childrenHash;
}

@property(nonatomic) unsigned long long childrenHash; // @synthesize childrenHash=_childrenHash;
@property(nonatomic) unsigned long long *childrenCount; // @synthesize childrenCount=_childrenCount;
@property(retain, nonatomic) SCRUIElement *uiElement; // @synthesize uiElement=_uiElement;
- (BOOL)didChildrenHashChange;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 childrenHash:(unsigned long long)arg2;
- (id)init;

@end

