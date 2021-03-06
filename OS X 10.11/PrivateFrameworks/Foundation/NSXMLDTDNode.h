//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXMLNode.h>

@class NSString;

@interface NSXMLDTDNode : NSXMLNode
{
    unsigned long long _DTDKind;
    NSString *_name;
    NSString *_notationName;
    NSString *_publicID;
    NSString *_systemID;
}

+ (id)_nodeFromLibXML2Node:(void *)arg1;
- (void)_addToLibxml2TreeRepresentationWithDoc:(struct _xmlDoc *)arg1 dtd:(struct _xmlDtd *)arg2 context:(struct _xmlValidCtxt *)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)canonicalXMLStringPreservingComments:(BOOL)arg1;
- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)XPath;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
@property(copy) NSString *notationName;
@property(copy) NSString *systemID;
@property(copy) NSString *publicID;
@property(readonly, getter=isExternal) BOOL external;
@property unsigned long long DTDKind;
- (id)initWithXMLString:(id)arg1;
- (id)initWithKind:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)initWithKind:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

