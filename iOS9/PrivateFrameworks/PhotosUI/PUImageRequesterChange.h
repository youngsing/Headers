//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUImageRequesterChange : NSObject
{
    _Bool _imageDidChange;
    _Bool _imageIsFullQualityDidChange;
    _Bool _fullsizeImageDataDidChange;
}

- (void)_setFullsizeImageDataDidChange:(_Bool)arg1;
@property(nonatomic) _Bool fullsizeImageDataDidChange; // @synthesize fullsizeImageDataDidChange=_fullsizeImageDataDidChange;
- (void)_setImageIsFullQualityDidChange:(_Bool)arg1;
@property(nonatomic) _Bool imageIsFullQualityDidChange; // @synthesize imageIsFullQualityDidChange=_imageIsFullQualityDidChange;
- (void)_setImageDidChange:(_Bool)arg1;
@property(nonatomic) _Bool imageDidChange; // @synthesize imageDidChange=_imageDidChange;
@property(readonly, nonatomic) _Bool changed;

@end
