//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPen : NSObject <MFObject>
{
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
+ (id)pen;
- (int)getStyle;
- (int)getWidth;
- (id)getColor;
- (int)selectInto:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
- (id)init;

@end

