//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpectrum/SPCPath.h>

@interface SPCEllipsePath : SPCPath
{
}

+ (id)pathWithEllipseInRect:(struct CGRect)arg1;
- (void)transformUsingAffineTransform:(id)arg1;
- (struct CGRect)bounds;
- (struct CGPath *)computedPathInRect:(struct CGRect)arg1;
- (BOOL)isClosed;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEllipseInRect:(struct CGRect)arg1;

@end
