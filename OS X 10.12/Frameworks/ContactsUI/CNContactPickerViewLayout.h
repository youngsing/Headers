//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNContactPickerViewLayout : NSObject
{
    BOOL _isGroupListVisible;
}

+ (id)layoutWithGroupListVisible:(BOOL)arg1;
- (id)listViewsInViews:(id)arg1;
- (id)topBarViewsInViews:(id)arg1;
- (id)constraintsWithMetrics:(id)arg1 views:(id)arg2;
- (void)horizontallyAlignViews:(id)arg1 withBuilder:(id)arg2 spacing:(double)arg3 insetMetricName:(id)arg4;
- (void)addContentViewConstraintsWithBuilder:(id)arg1;
- (void)addGroupListConstraintsWithBuilder:(id)arg1;
- (void)addTopBarConstraints:(id)arg1 withViews:(id)arg2;
- (id)initWithGroupListVisible:(BOOL)arg1;

@end

