//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSURL, TVLLegacyJSContext, TVSXMLDocument;

@interface TVLJSDocumentLoader : NSObject
{
    NSMutableSet *_activeImageProxies;
    _Bool _isUsed;
    TVLLegacyJSContext *_context;
    NSString *_functionName;
    TVSXMLDocument *_origXMLDocument;
    TVSXMLDocument *_xmlDocument;
    NSURL *_sourceURL;
    CDUnknownBlockType _jsCallback;
}

+ (id)documentLoaderForContext:(struct OpaqueJSContext *)arg1 functionName:(id)arg2 argumentCount:(unsigned long long)arg3 arguments:(const struct OpaqueJSValue **)arg4 exception:(const struct OpaqueJSValue **)arg5;
@property(nonatomic) _Bool isUsed; // @synthesize isUsed=_isUsed;
@property(copy, nonatomic) CDUnknownBlockType jsCallback; // @synthesize jsCallback=_jsCallback;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) TVSXMLDocument *xmlDocument; // @synthesize xmlDocument=_xmlDocument;
@property(retain, nonatomic) TVSXMLDocument *origXMLDocument; // @synthesize origXMLDocument=_origXMLDocument;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) TVLLegacyJSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)loadDocumentViewByReusingJSContext:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDocumentByReusingJSContext:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 functionName:(id)arg2 xmlDocument:(id)arg3 sourceURL:(id)arg4 jsCallback:(CDUnknownBlockType)arg5;

@end
