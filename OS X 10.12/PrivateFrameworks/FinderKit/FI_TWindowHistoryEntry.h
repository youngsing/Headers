//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FI_TWindowHistoryEntry : NSObject
{
    struct TFENodeVector _targetPath;
    NSDictionary *_windowState;
    NSDictionary *_searchState;
}

+ (id)historyEntryForTargetPath:(const struct TFENodeVector *)arg1 windowState:(id)arg2;
@property(retain, nonatomic) NSDictionary *searchState; // @synthesize searchState=_searchState;
@property(retain, nonatomic) NSDictionary *windowState; // @synthesize windowState=_windowState;
@property(nonatomic) struct TFENodeVector targetPath; // @synthesize targetPath=_targetPath;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)dealloc;

@end
