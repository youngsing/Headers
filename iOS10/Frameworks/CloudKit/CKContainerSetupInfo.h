//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKAccountInfo, CKContainerID, NSDictionary, NSString;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding>
{
    _Bool _captureResponseHTTPHeaders;
    _Bool _wantsSiloedContext;
    _Bool _holdAllOperations;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKAccountInfo *_accountInfoOverride;
    NSDictionary *_fakeEntitlements;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool holdAllOperations; // @synthesize holdAllOperations=_holdAllOperations;
@property(retain, nonatomic) NSDictionary *fakeEntitlements; // @synthesize fakeEntitlements=_fakeEntitlements;
@property(nonatomic) _Bool wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;
@property(nonatomic) _Bool captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property(retain, nonatomic) CKAccountInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

