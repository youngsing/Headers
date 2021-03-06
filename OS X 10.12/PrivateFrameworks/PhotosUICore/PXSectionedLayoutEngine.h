//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutEngine.h>

#import <PhotosUICore/PXMutableSectionedLayoutEngine-Protocol.h>

@class NSString, PXSectionedLayoutContent;
@protocol PXSectionedLayoutEngineDelegate, PXSectionedLayoutItem;

@interface PXSectionedLayoutEngine : PXLayoutEngine <PXMutableSectionedLayoutEngine>
{
    PXSectionedLayoutContent *_layoutContent;
    struct {
        char willGenerateLayoutForSection;
    } _delegateRespondsTo;
    BOOL _needsUpdateSeedItem;
    struct _PXLayoutGeometry *_geometryBuffer;
    unsigned long long _geometryBufferCount;
    long long _axis;
    struct CGSize _seedSize;
}

@property(readonly, nonatomic) struct CGSize seedSize; // @synthesize seedSize=_seedSize;
@property(readonly, nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (id)_emptyLayoutSnapshot;
- (void)_prepareGeometryBufferForCount:(unsigned long long)arg1;
- (void)_computeSection:(id)arg1;
- (id)_computeSectionsFromSection:(id)arg1 itemIndex:(long long)arg2 kind:(long long)arg3;
- (BOOL)_computeSectionsIfNeeded;
- (id)_newLayoutSnapshot;
- (id)_newLayoutSection;
- (void)_updateLayoutDataWithChangeDetails:(id)arg1;
- (void)_resetLayoutData;
- (id)computeLayoutSnapshot;
- (void)updateLayoutDataWithChangeDetails:(id)arg1;
- (BOOL)canComputeLayoutSnapshot;
- (void)setSeedItem:(id)arg1;
@property(nonatomic) __weak id <PXSectionedLayoutEngineDelegate> delegate; // @dynamic delegate;
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
- (void)setSeedSize:(struct CGSize)arg1;
- (id)performChangesAndWait:(CDUnknownBlockType)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3 insets:(struct NSEdgeInsets)arg4;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3;
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXSectionedLayoutItem> seedItem; // @dynamic seedItem;
@property(readonly) Class superclass;

@end

