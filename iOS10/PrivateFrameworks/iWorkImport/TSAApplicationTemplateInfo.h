//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSATemplateInfo.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSBundle, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSAApplicationTemplateInfo : TSATemplateInfo <NSCopying>
{
    NSString *_name;
    NSString *_documentVariant;
    NSString *_previewVariant;
}

+ (id)bundledDocumentContainerDirectoryURL;
+ (void)setBundledDocumentContainerDirectoryURL:(id)arg1;
+ (id)templateZipURLForTemplateName:(id)arg1;
+ (id)downloadedDocumentContainerDirectoryURL;
+ (id)localizationBundleForDocumentContainerURL:(id)arg1;
+ (id)localizationBundleForDocumentURL:(id)arg1;
+ (id)documentURLWithDocumentContainerURL:(id)arg1 variant:(id)arg2;
@property(readonly, nonatomic) NSString *previewVariant; // @synthesize previewVariant=_previewVariant;
@property(readonly, nonatomic) NSString *documentVariant; // @synthesize documentVariant=_documentVariant;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initHeadlessWithName:(id)arg1 variant:(unsigned long long)arg2 locale:(struct __CFLocale *)arg3;
- (id)initHeadlessWithName:(id)arg1 variant:(unsigned long long)arg2;
- (id)initHeadlessWithName:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSURL *bundledDocumentContainerURL;
@property(readonly, nonatomic) NSURL *documentContainerURL;
@property(readonly, nonatomic) NSURL *downloadedDocumentContainerURL;
@property(readonly, nonatomic) NSURL *templateZipURL;
@property(readonly, nonatomic) long long downloadState;
- (id)localizationBundle;
- (id)documentURLWithDocumentContainerURL:(id)arg1;
- (_Bool)isAvailable;
- (id)documentURL;
@property(readonly, nonatomic) NSBundle *previewBundle;
- (id)previewImageURL;
- (id)makeIdentifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyList:(id)arg1 documentVariant:(id)arg2 previewVariant:(id)arg3;
- (id)initWithDisplayName:(id)arg1 name:(id)arg2 documentVariant:(id)arg3 previewVariant:(id)arg4;

@end

