//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKTileOverlayRequester, NSData;

@interface MKTileOverlayRequesterOp : NSObject
{
    struct _GEOTileKey _key;
    MKTileOverlayRequester *_delegate;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) __weak MKTileOverlayRequester *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;

@end
