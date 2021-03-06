//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/NSCopying-Protocol.h>
#import <KeyboardServices/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _needsSaveToCloud;
    BOOL _wasDeleted;
    NSString *_phrase;
    NSString *_shortcut;
    NSDate *_timestamp;
    _KSTextReplacementEntry *_priorValue;
    NSData *_cloudData;
    NSString *_cloudID;
}

+ (id)localEntryFromCloudEntry:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *cloudID; // @synthesize cloudID=_cloudID;
@property BOOL wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property BOOL needsSaveToCloud; // @synthesize needsSaveToCloud=_needsSaveToCloud;
@property(retain, nonatomic) NSData *cloudData; // @synthesize cloudData=_cloudData;
@property(retain, nonatomic) _KSTextReplacementEntry *priorValue; // @synthesize priorValue=_priorValue;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
- (void).cxx_destruct;
- (BOOL)isEquivalentTo:(id)arg1;
- (id)description;
- (id)attributesDict;
- (id)uniqueID;
- (id)uniqueRecordName;
- (id)uniqueRecordNameVer0;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

