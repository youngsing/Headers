//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneLayer;

@interface FBSWorkspaceSceneLayerEvent : FBSWorkspaceSceneEvent
{
    FBSSceneLayer *_layer;
    _Bool _orderOut;
}

@property(nonatomic) _Bool orderOut; // @synthesize orderOut=_orderOut;
@property(retain, nonatomic) FBSSceneLayer *layer; // @synthesize layer=_layer;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end
