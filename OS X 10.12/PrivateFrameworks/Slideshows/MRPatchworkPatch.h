//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRImage;

@interface MRPatchworkPatch : NSObject
{
    MRImage *_image;
    struct CGRect rectangle;
    BOOL needsBlend;
}

@property(nonatomic) BOOL needsBlend; // @synthesize needsBlend;
@property(nonatomic) struct CGRect rectangle; // @synthesize rectangle;
@property(retain, nonatomic) MRImage *image; // @synthesize image=_image;
- (void)dealloc;
- (id)initWithImage:(id)arg1 rectangle:(struct CGRect)arg2 needsBlend:(BOOL)arg3;

@end

