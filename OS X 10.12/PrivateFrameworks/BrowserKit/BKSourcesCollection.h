//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BrowserKit/BKItemCollection.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BKSourcesCollection : BKItemCollection
{
    NSString *_itemDisplayName;
    struct CGImageSource *_itemIcon;
}

+ (id)providerWithSettings:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)setItemIcon:(id)arg1;
- (id)itemIcon;
- (id)itemIconRepresentationType;
- (BOOL)itemIsSourceLeaf;

@end

