//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ABXMLParseNode : NSObject
{
    NSString *_string;
    long long _nodeType;
    NSMutableArray *_children;
    ABXMLParseNode *_parent;
}

- (id)description;
- (id)objectGraphDescription;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)childAtIndex:(long long)arg1;
- (BOOL)hasChildren;
- (long long)childCount;
- (id)children;
- (id)childNodesMatchingString:(id)arg1;
- (void)addChild:(id)arg1;
- (long long)nodeType;
- (id)string;
- (void)finalize;
- (void)dealloc;
- (id)initWithString:(id)arg1 nodeType:(long long)arg2;

@end

