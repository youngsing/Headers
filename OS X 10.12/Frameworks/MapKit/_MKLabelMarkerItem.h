//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem
{
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)_muid;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (CDStruct_c3b9c2ee)coordinate;
- (int)referenceFrame;
- (id)name;
- (BOOL)isValid;
- (id)initWithLabelMarker:(id)arg1;

@end
