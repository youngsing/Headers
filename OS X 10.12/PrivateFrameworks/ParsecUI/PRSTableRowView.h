//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSLayoutConstraint, PRSLineView;

@interface PRSTableRowView : NSTableRowView
{
    PRSLineView *_lineView;
    NSLayoutConstraint *_cellWidth;
    BOOL _gridlinedBelow;
    BOOL _disallowVibrancy;
    double _inset;
    double _additionalInset;
}

+ (void)updateViewMode:(BOOL)arg1;
@property double additionalInset; // @synthesize additionalInset=_additionalInset;
@property double inset; // @synthesize inset=_inset;
@property BOOL disallowVibrancy; // @synthesize disallowVibrancy=_disallowVibrancy;
@property(nonatomic) BOOL gridlinedBelow; // @synthesize gridlinedBelow=_gridlinedBelow;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layout;
- (BOOL)allowsVibrancy;

@end
