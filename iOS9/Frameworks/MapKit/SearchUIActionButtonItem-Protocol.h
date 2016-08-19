//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol SearchUIActionButtonItem <NSObject>
@property(readonly, nonatomic) _Bool isOverlay;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long actionType;

@optional
@property(readonly, nonatomic) NSString *contactIdentifier;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) NSURL *punchoutURL;
@property(readonly, copy, nonatomic) NSString *localMediaIdentifier;
@property(readonly, copy, nonatomic) NSString *labelForLocalMedia;
@property(readonly, nonatomic) _Bool requiresLocalMedia;
@property(readonly, nonatomic) NSArray *adamIDs;
@end
