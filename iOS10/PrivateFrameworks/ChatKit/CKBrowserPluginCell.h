//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBrowserCell.h>

@class IMBalloonPlugin, UIImageView;

@interface CKBrowserPluginCell : CKBrowserCell
{
    IMBalloonPlugin *_plugin;
    UIImageView *_browserImage;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *browserImage; // @synthesize browserImage=_browserImage;
@property(retain, nonatomic) IMBalloonPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)_updateShinyStatus;
- (void)_setImageForPlugin:(id)arg1;
- (id)iconView;

@end
