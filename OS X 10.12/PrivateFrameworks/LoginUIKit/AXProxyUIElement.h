//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AXProxyUIElement : NSObject
{
    id _realElement;
    id _parent;
}

@property id realElement; // @synthesize realElement=_realElement;
- (id)description;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRealElement:(id)arg1 parent:(id)arg2;

@end
