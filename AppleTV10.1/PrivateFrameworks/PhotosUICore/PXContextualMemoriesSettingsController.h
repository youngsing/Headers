//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXContextualMemoriesSettings;

@interface PXContextualMemoriesSettingsController : NSObject
{
    _Bool _requestingUpdates;
    PXContextualMemoriesSettings *_settings;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_registrationIdentifiers;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *registrationIdentifiers; // @synthesize registrationIdentifiers=_registrationIdentifiers;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic, getter=isRequestingUpdates) _Bool requestingUpdates; // @synthesize requestingUpdates=_requestingUpdates;
@property(readonly, nonatomic) PXContextualMemoriesSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1;
- (void)registerForLocationPrefetchingWithIdentifier:(id)arg1;
- (void)requestUpdatedContextualMemoriesSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
