//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol CRKClassSessionBeaconBrowserDelegate;

@interface CRKClassSessionBeaconBrowser : NSObject
{
    _Bool _isBrowsing;
    id <CRKClassSessionBeaconBrowserDelegate> _delegate;
    NSSet *_organizationUUIDs;
    NSSet *_controlGroupIdentifiers;
}

@property(readonly, nonatomic) _Bool isBrowsing; // @synthesize isBrowsing=_isBrowsing;
@property(copy, nonatomic) NSSet *controlGroupIdentifiers; // @synthesize controlGroupIdentifiers=_controlGroupIdentifiers;
@property(copy, nonatomic) NSSet *organizationUUIDs; // @synthesize organizationUUIDs=_organizationUUIDs;
@property(nonatomic) __weak id <CRKClassSessionBeaconBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)stateDictionary;
- (void)increaseScanFrequencyForDuration:(double)arg1;
- (void)stopBrowsing;
- (void)startBrowsing;

@end
