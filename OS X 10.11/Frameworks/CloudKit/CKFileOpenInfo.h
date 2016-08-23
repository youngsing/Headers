//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CKFileOpenInfo : NSObject <NSSecureCoding>
{
    BOOL _shouldReadRawEncryptedData;
    NSString *_UUID;
    NSString *_path;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

