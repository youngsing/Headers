//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CAPluginLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)_shouldFinalizeOnMainThread;
+ (id)defaultValueForKey:(id)arg1;
+ (id)CA_attributes;
@property(copy) NSString *pluginGravity;
@property unsigned int pluginFlags;
@property unsigned long long pluginId;
@property(copy) NSString *pluginType;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)didChangeValueForKey:(id)arg1;

@end

