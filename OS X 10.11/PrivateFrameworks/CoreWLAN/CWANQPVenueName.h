//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreWLAN/CWANQPElement.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CWANQPVenueName : CWANQPElement <NSSecureCoding, NSCopying>
{
    long long _venueGroup;
    long long _venueType;
    NSString *_localizedVenueGroup;
    NSString *_localizedVenueType;
    NSArray *_venueNameList;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *venueNameList; // @synthesize venueNameList=_venueNameList;
@property(copy, nonatomic) NSString *localizedVenueType; // @synthesize localizedVenueType=_localizedVenueType;
@property(copy, nonatomic) NSString *localizedVenueGroup; // @synthesize localizedVenueGroup=_localizedVenueGroup;
@property(nonatomic) long long venueType; // @synthesize venueType=_venueType;
@property(nonatomic) long long venueGroup; // @synthesize venueGroup=_venueGroup;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3;

@end

