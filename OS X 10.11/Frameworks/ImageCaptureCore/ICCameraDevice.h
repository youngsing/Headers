//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCaptureCore/ICDevice.h>

@class NSArray, NSNumber, NSString;

@interface ICCameraDevice : ICDevice
{
    id _cameraProperties;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)finishedSerializedOperation;
- (void)startSerializedOperation;
- (void)finishedBulkOperation;
- (void)startBulkOperation;
- (BOOL)requestMetadataAndThumbnailsForFiles:(id)arg1;
- (BOOL)requestMetadataForFiles:(id)arg1;
- (BOOL)requestThumbnailsForFiles:(id)arg1;
- (void)addToGetMetadataQueue:(id)arg1;
- (void)addToGetThumbnailQueue:(id)arg1;
- (void)registerForNotifications:(id)arg1 options:(id)arg2;
- (void)removeMediaFiles:(id)arg1;
- (void)removeMediaFile:(id)arg1;
- (void)addMediaFile:(id)arg1;
- (void)removeFolder:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)removeContent;
- (void)getContent;
- (void)requestSendPTPCommand:(id)arg1 outData:(id)arg2 sendCommandDelegate:(id)arg3 didSendCommandSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)requestReadDataFromFile:(id)arg1 atOffset:(long long)arg2 length:(long long)arg3 readDelegate:(id)arg4 didReadDataSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)requestUploadFile:(id)arg1 options:(id)arg2 uploadDelegate:(id)arg3 didUploadSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)cancelDownload;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)requestEject;
- (void)requestEjectOrDisconnect;
- (void)cancelDelete;
- (void)requestDeleteFiles:(id)arg1;
- (void)requestUnpairDevice;
- (void)requestPairDevice;
- (void)requestDisableTethering;
- (void)requestEnableTethering;
- (void)requestTakePicture;
- (void)requestSyncClock;
- (void)requestCloseSession;
- (void)requestOpenSession;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)updateThumbnailsForFiles:(id)arg1;
- (void)updateMetadataForFiles:(id)arg1;
- (void)processImageCaptureNotification:(id)arg1 queued:(BOOL)arg2;
- (void)processQueuedImageCaptureNotification:(id)arg1;
- (void)unregisterForImageCaptureEventNotifications:(id)arg1;
- (void)registerForImageCaptureEventNotifications:(id)arg1;
- (void)handleContent:(id)arg1;
- (BOOL)handleCommandCompletion:(id)arg1;
- (id)filesOfType:(id)arg1;
@property(readonly) NSArray *mediaFiles;
@property(readonly) NSArray *contents;
@property BOOL tetheredCaptureEnabled;
- (void)setEstimatedCountOfMediafiles:(unsigned long long)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long long)arg1;
@property(readonly) NSArray *supportedSidecarFiles;
@property(readonly) NSString *productVersion;
@property(readonly) NSString *productType;
@property(readonly) NSNumber *devicePairedState;
@property(readonly) NSString *deviceEnclosureColor;
@property(readonly) NSString *deviceColor;
@property(readonly) NSString *deviceClass;
@property(readonly) NSString *buildVersion;
@property(readonly) BOOL isAccessRestrictedAppleDevice;
@property(readonly) unsigned long long estimatedNumberOfDownloadableItems;
@property(readonly) unsigned long long estimatedCountOfMediafiles;
@property(readonly) double timeOffset;
- (BOOL)isLocked;
- (BOOL)hasTemporaryStore;
@property(readonly) unsigned long long batteryLevel;
@property(readonly) BOOL batteryLevelAvailable;
@property(readonly) unsigned long long contentCatalogPercentCompleted;
@property(readonly, getter=mountPoint) NSString *mountPath;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)updateProperties:(id)arg1;
- (BOOL)deallocPhase;
- (void)initializeCameraProperties:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly) NSString *mountPoint;

@end

