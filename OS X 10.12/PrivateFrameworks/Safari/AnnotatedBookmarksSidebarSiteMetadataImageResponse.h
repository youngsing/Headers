//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface AnnotatedBookmarksSidebarSiteMetadataImageResponse : WBSSiteMetadataResponse
{
    NSImage *_thumbnail;
}

+ (id)responseWithURL:(id)arg1 thumbnail:(id)arg2;
@property(readonly, nonatomic) NSImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 thumbnail:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

