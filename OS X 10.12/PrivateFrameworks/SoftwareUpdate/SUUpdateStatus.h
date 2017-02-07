//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSCopying-Protocol.h>
#import <SoftwareUpdate/NSSecureCoding-Protocol.h>

@class NSError, NSString;

@interface SUUpdateStatus : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_productKey;
    unsigned long long _installState;
    long long _activePhases;
    NSError *_error;
    unsigned long long _totalBytes;
    unsigned long long _downloadedBytes;
    double _estimatedTimeRemainingForDownload;
    double _installProgressPercent;
    double _estimatedTimeRemainingForInstall;
    double _estimatedTimeForPostLogoutCommit;
    NSString *_specialInstallStatus;
}

+ (BOOL)isActiveInstallState:(unsigned long long)arg1;
+ (id)stringForInstallState:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *specialInstallStatus; // @synthesize specialInstallStatus=_specialInstallStatus;
@property(nonatomic) double estimatedTimeForPostLogoutCommit; // @synthesize estimatedTimeForPostLogoutCommit=_estimatedTimeForPostLogoutCommit;
@property(nonatomic) double estimatedTimeRemainingForInstall; // @synthesize estimatedTimeRemainingForInstall=_estimatedTimeRemainingForInstall;
@property(nonatomic) double installProgressPercent; // @synthesize installProgressPercent=_installProgressPercent;
@property(nonatomic) double estimatedTimeRemainingForDownload; // @synthesize estimatedTimeRemainingForDownload=_estimatedTimeRemainingForDownload;
@property(nonatomic) unsigned long long downloadedBytes; // @synthesize downloadedBytes=_downloadedBytes;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long activePhases; // @synthesize activePhases=_activePhases;
@property(nonatomic) unsigned long long installState; // @synthesize installState=_installState;
@property(readonly, copy) NSString *productKey; // @synthesize productKey=_productKey;
@property(readonly, nonatomic) double estimatedTimeRemaining;
@property(readonly, nonatomic) double progressPercent;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductKey:(id)arg1;

@end
