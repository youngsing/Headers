//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/NCWidgetVisibilityDelegate-Protocol.h>
#import <NotificationCenter/_NCDataSourceManager-Protocol.h>

@class NCWidgetDataSource, NCWidgetVisibilityManager, NSArray, NSString;
@protocol _NCParentDataSourceManager;

__attribute__((visibility("hidden")))
@interface NCWidgetDataSourceManager : NSObject <NCWidgetVisibilityDelegate, _NCDataSourceManager>
{
    NCWidgetDataSource *_widgetDataSource;
    NCWidgetVisibilityManager *_widgetVisbilityManager;
    id _plugInDiscoveryToken;
    _Bool _isPublishing;
    CDUnknownBlockType _didStartBlock;
    id <_NCParentDataSourceManager> _parentDataSourceManager;
}

@property(retain, nonatomic, getter=_widgetVisbilityManager) NCWidgetVisibilityManager *widgetVisbilityManager; // @synthesize widgetVisbilityManager=_widgetVisbilityManager;
@property(nonatomic) id <_NCParentDataSourceManager> parentDataSourceManager; // @synthesize parentDataSourceManager=_parentDataSourceManager;
@property(retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken; // @synthesize plugInDiscoveryToken=_plugInDiscoveryToken;
- (void)_endContinuousPlugInDiscovery;
- (void)_beginContinuousPlugInDiscovery;
- (void)_updatePublishedWidgetExtensions:(id)arg1;
- (id)_widgetExtensionsDiscoveryAttributes;
- (void)_revokeExtensionWithIdentifier:(id)arg1;
- (void)_updateDataSourceWithExtension:(id)arg1;
- (_Bool)_shouldPublishWidgetExtension:(id)arg1;
- (void)widgetVisibilityDidChange;
- (void)_stop:(CDUnknownBlockType)arg1;
- (void)_start:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *dataSources;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

