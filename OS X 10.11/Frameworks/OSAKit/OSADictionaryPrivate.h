//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface OSADictionaryPrivate : NSObject
{
    NSData *_data;
    NSString *_html;
    NSMutableArray *_definitions;
    NSMutableArray *_suiteDefinitions;
    NSMutableArray *_classDefinitions;
    NSMutableDictionary *_definitionsByUniqueIdentifier;
    BOOL _parsed;
    NSString *_language;
}

@property(copy) NSString *language;
- (void)setParsed:(BOOL)arg1;
- (BOOL)parsed;
- (void)setDefinition:(id)arg1 forUniqueIdentifier:(id)arg2;
- (id)definitionForUniqueIdentifier:(id)arg1;
- (void)setClassDefinitions:(id)arg1;
- (id)classDefinitions;
- (void)setSuiteDefinitions:(id)arg1;
- (id)suiteDefinitions;
- (void)setDefinitions:(id)arg1;
- (id)definitions;
- (void)setHtml:(id)arg1;
- (id)html;
- (void)setData:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)init;

@end

