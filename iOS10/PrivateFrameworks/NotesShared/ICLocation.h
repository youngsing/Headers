//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CLPlacemark, NSString;

@interface ICLocation : NSManagedObject
{
    _Bool updatingPlace;
}

+ (id)searchStringsForPlacemark:(id)arg1;
@property(nonatomic) _Bool updatingPlace; // @synthesize updatingPlace;
- (void)setLocationFromURL:(id)arg1;
@property(readonly, nonatomic) NSString *formattedAddress;
- (id)searchStrings;

// Remaining properties
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) CLPlacemark *placemark; // @dynamic placemark;

@end

