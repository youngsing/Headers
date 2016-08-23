//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScriptObjC/NSXMLParserDelegate-Protocol.h>

@class BAFunctionSignature, BAMetadataManager, NSMutableDictionary, NSString;

@interface BAXMLContext : NSObject <NSXMLParserDelegate>
{
    BAMetadataManager *_m;
    NSString *_currentClass;
    NSString *_currentMethod;
    NSString *_currentProtocol;
    NSString *_currentFunction;
    unsigned long long _currentArgDepth;
    BAFunctionSignature *_currentSignature;
    NSMutableDictionary *_retvals;
}

- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

