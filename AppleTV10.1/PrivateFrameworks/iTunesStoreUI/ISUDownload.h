//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, SSDownload;
@protocol OS_dispatch_queue;

@interface ISUDownload : NSObject
{
    SSDownload *_download;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (void)initialize;
+ (id)downloadProperties;
+ (id)downloadExternalProperties;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *thumbnailImageURL;
@property(readonly, nonatomic) NSNumber *storePreorderIdentifier;
@property(readonly, nonatomic) NSNumber *storeItemIdentifier;
@property(readonly, nonatomic) NSString *statusDescription;
@property(retain, nonatomic) SSDownload *managedDownload;
- (void)resetPreorderState;
@property(readonly, nonatomic) NSString *phaseIdentifier;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic, getter=isPurchase) _Bool purchase;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
@property(readonly, nonatomic, getter=isContentRestricted) _Bool contentRestricted;
@property(readonly, nonatomic) double estimatedSecondsRemaining;
- (id)copyLocalizedStatusString;
@property(readonly, nonatomic) long long bytesTotal;
@property(readonly, nonatomic) long long bytesDownloaded;
@property(readonly, nonatomic) NSString *artistName;
- (void)dealloc;
- (id)initWithManagedDownload:(id)arg1;

@end

