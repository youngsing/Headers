//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface OSInstallContainer : NSObject
{
    NSMutableArray *_addlPackagesList;
    NSMutableArray *_collectionList;
    BOOL _deferredInstall;
    unsigned long long _osInstallFootprintInKb;
    NSMutableArray *_deferredPackageList;
    NSMutableArray *_scriptsList;
    NSMutableArray *_packagesInfo;
    NSString *_errorFile;
    NSString *_installerVolume;
    long long _packageReadCount;
}

+ (id)dataForVolume:(id)arg1;
+ (id)containerForVolume:(id)arg1;
@property long long packageReadCount; // @synthesize packageReadCount=_packageReadCount;
@property(retain, nonatomic) NSString *installerVolume; // @synthesize installerVolume=_installerVolume;
@property(retain, nonatomic) NSString *errorFile; // @synthesize errorFile=_errorFile;
@property(retain, nonatomic) NSMutableArray *packagesInfo; // @synthesize packagesInfo=_packagesInfo;
@property(retain, nonatomic) NSMutableArray *scriptsList; // @synthesize scriptsList=_scriptsList;
@property(retain, nonatomic) NSMutableArray *deferredPackageList; // @synthesize deferredPackageList=_deferredPackageList;
@property(retain, nonatomic) NSMutableArray *collectionList; // @synthesize collectionList=_collectionList;
@property(retain, nonatomic) NSMutableArray *addlPackagesList; // @synthesize addlPackagesList=_addlPackagesList;
- (void)retrieveInstallSizeAtPath:(id)arg1;
- (void)loadDefaultPackages;
- (unsigned long long)addExternalPackageToDeferredInstall:(id)arg1;
- (unsigned long long)maxDefaultInstallFootprint;
- (id)collectionArrays;
- (id)choicesXML;
- (unsigned long long)addScriptToContainer:(id)arg1;
- (unsigned long long)addScriptsToContainer:(id)arg1;
- (unsigned long long)addPackageToContainer:(id)arg1;
- (unsigned long long)addPackagesToContainer:(id)arg1;
- (BOOL)isCollection;
- (id)fileName;
- (void)dealloc;
- (id)initWithVolume:(id)arg1 loadPackages:(BOOL)arg2;

@end
