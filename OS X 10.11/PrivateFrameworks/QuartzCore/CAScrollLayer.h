//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CAScrollLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)CA_attributes;
@property(copy) NSString *scrollMode;
- (struct CGRect)_visibleRectOfLayer:(id)arg1;
- (void)_scrollRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (void)_scrollPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (void)scrollToRect:(struct CGRect)arg1;
- (void)scrollToPoint:(struct CGPoint)arg1;

@end

