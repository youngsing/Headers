//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProKit/ProStructuredThemeStorage-Protocol.h>
#import <ProKit/ProStructuredThemeStorage2-Protocol.h>

@class NSLock, NSMapTable, NSProCommonAssetStorage, NSString;

@interface ProStructuredThemeStore : NSObject <ProStructuredThemeStorage, ProStructuredThemeStorage2>
{
    NSMapTable *_cache;
    NSProCommonAssetStorage *_store;
    NSLock *_cacheLock;
    unsigned long long _themeIndex;
    NSString *_bundleID;
}

- (void)clearRenditionCache;
- (id)cacheLock;
- (id)cache;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;
- (struct _themelook *)validThemeLook;
- (id)zeroCodeGlyphList;
- (BOOL)canGetRenditionWithKey:(struct _renditionkeytoken *)arg1 isFPO:(char *)arg2;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken *)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken *)arg1;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken *)arg1;
- (void)_getKeyForAssetInOtherLookGroupClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(char *)arg2;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(char *)arg2;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken *)arg1;
- (id)_createRenditionKeyDataFromKey:(struct _renditionkeytoken *)arg1;
- (struct _colordef)physicalColorWithName:(id)arg1;
- (id)themeStore;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (BOOL)assetExistsForKey:(struct _renditionkeytoken *)arg1;
- (id)keySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)keyFormat;
- (BOOL)usesProSystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (long long)colorSpaceID;
- (BOOL)_shouldForceGrayHUD;
- (void)setThemeIndex:(unsigned long long)arg1;
- (id)bundleID;
- (id)displayNameForPartID:(long long)arg1;
- (id)constantNameForPartID:(long long)arg1;
- (id)displayNameForElementID:(long long)arg1;
- (id)constantNameForElementID:(long long)arg1;

@end

