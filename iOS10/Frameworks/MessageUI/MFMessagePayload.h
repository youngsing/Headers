//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSUUID, UIImage;

@interface MFMessagePayload : NSObject <NSSecureCoding>
{
    NSString *_text;
    UIImage *_image;
    NSURL *_mediaURL;
    NSURL *_URL;
    NSString *_statusText;
    NSString *_accessibilityLabel;
    NSString *_changeSummaryText;
    NSUUID *_sessionIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(copy, nonatomic) NSString *changeSummaryText; // @synthesize changeSummaryText=_changeSummaryText;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;

@end

