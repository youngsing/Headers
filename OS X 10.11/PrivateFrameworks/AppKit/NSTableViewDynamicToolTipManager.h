//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewDynamicToolTipManager.h>

@interface NSTableViewDynamicToolTipManager : NSViewDynamicToolTipManager
{
}

- (id)dynamicToolTipRevealoverInfoAtPoint:(struct CGPoint)arg1 trackingRect:(struct CGRect *)arg2;
- (id)dynamicToolTipStringAtPoint:(struct CGPoint)arg1 trackingRect:(struct CGRect *)arg2;
- (struct CGRect)dynamicToolTipRectAtPoint:(struct CGPoint)arg1;
- (void)_getColumn:(long long *)arg1 row:(long long *)arg2 cell:(id *)arg3 cellFrame:(struct CGRect *)arg4 toolTipRect:(struct CGRect *)arg5 wantsToolTip:(char *)arg6 wantsRevealover:(char *)arg7 atPoint:(struct CGPoint)arg8;
- (id)_tooltipStringForCell:(id)arg1 column:(long long)arg2 row:(long long)arg3 point:(struct CGPoint)arg4 trackingRect:(struct CGRect *)arg5;
- (BOOL)_wantsRevealoverAtColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)_wantsToolTipAtColumn:(long long)arg1 row:(long long)arg2;

@end

