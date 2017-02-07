//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface NSColoredPencil : NSObject
{
    NSString *_name;
    NSColor *_color;
    NSImage *_image;
}

@property(readonly, copy) NSColor *color; // @synthesize color=_color;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) NSImage *image; // @synthesize image=_image;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithName:(id)arg1 color:(id)arg2 image:(id)arg3;
- (id)owningPencilView;
- (void)setOwningPencilView:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end
