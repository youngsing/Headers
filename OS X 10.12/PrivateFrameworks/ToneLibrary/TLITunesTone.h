//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TLITunesTone : NSObject
{
    BOOL _purchased;
    BOOL _ringtone;
    BOOL _protected;
    BOOL _private;
    NSString *_identifier;
    NSString *_name;
    NSString *_filePath;
    NSNumber *_pid;
    NSString *_artworkFile;
    unsigned long long _duration;
}

@property(nonatomic, getter=isPrivate, setter=_setPrivate:) BOOL private; // @synthesize private=_private;
@property(nonatomic, getter=isProtected, setter=_setProtected:) BOOL protected; // @synthesize protected=_protected;
@property(nonatomic, setter=_setDuration:) unsigned long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic, setter=_setArtworkFile:) NSString *artworkFile; // @synthesize artworkFile=_artworkFile;
@property(copy, nonatomic, setter=_setPid:) NSNumber *pid; // @synthesize pid=_pid;
@property(nonatomic, getter=isRingtone, setter=_setRingtone:) BOOL ringtone; // @synthesize ringtone=_ringtone;
@property(nonatomic, getter=isPurchased, setter=_setPurchased:) BOOL purchased; // @synthesize purchased=_purchased;
@property(copy, nonatomic, setter=_setFilePath:) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic, setter=_setName:) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic, setter=_setIdentifier:) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;

@end

