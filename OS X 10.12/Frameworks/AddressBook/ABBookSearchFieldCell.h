//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSearchFieldCell.h>

@class NSProgressIndicator;

__attribute__((visibility("hidden")))
@interface ABBookSearchFieldCell : NSSearchFieldCell
{
    NSProgressIndicator *_progressIndicator;
    BOOL _showsProgress;
}

@property(nonatomic) BOOL showsProgress; // @synthesize showsProgress=_showsProgress;
@property(nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (struct CGRect)cancelButtonRectForBounds:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
