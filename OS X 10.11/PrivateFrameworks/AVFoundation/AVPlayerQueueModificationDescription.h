//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject
{
    long long _modificationType;
    AVPlayerItem *_item;
    AVPlayerItem *_afterItem;
}

+ (id)modificationForRemovingItem:(id)arg1;
+ (id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2;
@property(readonly, nonatomic) AVPlayerItem *afterItem; // @synthesize afterItem=_afterItem;
@property(readonly, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long modificationType; // @synthesize modificationType=_modificationType;
- (void)dealloc;
- (id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3;
- (id)init;

@end

