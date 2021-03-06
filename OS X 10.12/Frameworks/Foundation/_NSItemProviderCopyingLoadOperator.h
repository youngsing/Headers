//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/_NSItemProviderLoading-Protocol.h>

@class NSDictionary, NSItemProvider, NSString;

__attribute__((visibility("hidden")))
@interface _NSItemProviderCopyingLoadOperator : NSObject <_NSItemProviderLoading>
{
    NSItemProvider *_itemProvider;
    NSDictionary *_loadedItems;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDictionary *loadedItems; // @synthesize loadedItems=_loadedItems;
@property NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)_sandboxedResourceForItemIfNeeded:(id)arg1 error:(id *)arg2;
- (id)_loadItemsForTypeIdentifiers:(id)arg1 itemProvider:(id)arg2;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithItemProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

