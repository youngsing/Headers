//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PackageKit/PKPackageSource-Protocol.h>

@class NSArray;

@interface PKProduct : NSObject <PKPackageSource>
{
    int _minTrustLevel;
    int _evaluatedTrustLevel;
    NSArray *_certificateChain;
    struct __SecTrust *_trustRef;
    BOOL _allowExpiredCerts;
    BOOL _allowExpiredRoots;
}

+ (BOOL)canInitWithURL:(id)arg1;
+ (id)productByLoadingProductAtURL:(id)arg1 error:(id *)arg2;
+ (id)_allProductClasses;
+ (void)_setAllowsFolderArchives:(BOOL)arg1;
+ (BOOL)_allowsFolderArchives;
- (id)allPackageReferences;
- (id)resourceDataForKey:(id)arg1 returningMIMEType:(id *)arg2 returningUTI:(id *)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (id)distributionContainer;
- (id)distribution;
- (void)setAllowExpiredRoots:(BOOL)arg1;
- (void)setAllowExpiredCertificates:(BOOL)arg1;
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)arg1;
- (int)trustLevelReturningCertificateChain:(id *)arg1;
- (BOOL)evaluateTrustReturningError:(id *)arg1;
- (void)setMinimumRequiredTrustLevel:(int)arg1;
- (id)productVersion;
- (id)productIdentifier;
- (id)productType;
- (id)URL;
- (void)dealloc;
- (id)_archiveForTrustEvaluation;
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;
- (id)_distributionFlatData;
- (id)_distributionArchivePath;

@end
