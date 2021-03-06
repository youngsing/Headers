//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL, UIImage;

@interface LPImage : NSObject <NSSecureCoding>
{
    UIImage *_originalPlatformImage;
    NSData *_data;
    NSString *_MIMEType;
    _Bool _placeholderIcon;
    NSURL *_fileURL;
    UIImage *_platformImage;
}

+ (_Bool)supportsSecureCoding;
+ (id)_PNGImageNamed:(id)arg1;
@property(nonatomic, getter=isPlaceholderIcon) _Bool placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(retain, nonatomic) UIImage *platformImage; // @synthesize platformImage=_platformImage;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (_Bool)_shouldEncodeData;
@property(readonly, nonatomic) unsigned long long _encodedSize;
- (void)_mapDataFromFileURL;
- (void)_createDataFromPlatformImage;
@property(readonly, copy, nonatomic) NSString *MIMEType;
@property(readonly, copy, nonatomic) NSData *data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlatformImage:(id)arg1;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)_initWithImage:(id)arg1;
- (id)init;

@end

