//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface FI_TInlinePreviewData : NSObject <NSCopying>
{
    struct TNSRef<NSDictionary *, void> _clientProperties;
    unsigned short _contentRect[4];
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setClientProperties:(id)arg1;
- (id)clientProperties;
- (void)setContentRect:(const struct CGRect *)arg1;
- (struct CGRect)contentRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
