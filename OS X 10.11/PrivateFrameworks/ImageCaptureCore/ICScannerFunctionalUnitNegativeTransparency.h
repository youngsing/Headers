//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCaptureCore/ICScannerFunctionalUnit.h>

@class NSIndexSet;

@interface ICScannerFunctionalUnitNegativeTransparency : ICScannerFunctionalUnit
{
    id _ntrProps;
}

- (id)colorSyncProfilePath;
- (id)description;
- (id)currentSettings;
- (id)colorSyncModeForGrayOverview;
- (id)colorSyncModeForRGBOverview;
- (id)initWithDictionary:(id)arg1 andScanner:(id)arg2;
- (void)finalize;
- (void)dealloc;
@property unsigned long long documentType;
@property(readonly) struct CGSize documentSize;
@property(readonly) NSIndexSet *supportedDocumentTypes;
- (id)valueForUndefinedKey:(id)arg1;

@end

