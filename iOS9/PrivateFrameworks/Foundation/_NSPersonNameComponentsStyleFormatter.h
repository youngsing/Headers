//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLocale, NSPersonNameComponentsFormatter, NSSet;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsStyleFormatter : NSObject
{
    NSDictionary *_alterations;
    _NSPersonNameComponentsStyleFormatter *_fallbackStyleFormatter;
    NSSet *_keysOfInterest;
    _Bool _shouldFallBack;
    _Bool _isEnabled;
    long long _ordering;
    NSLocale *_locale;
    NSArray *_orderedTemplate;
    NSArray *_fallbackDescriptor;
    NSPersonNameComponentsFormatter *_masterFormatter;
    _Bool _ignoreDelimiter;
}

@property(retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter; // @synthesize fallbackStyleFormatter=_fallbackStyleFormatter;
@property(readonly, copy) NSPersonNameComponentsFormatter *masterFormatter; // @synthesize masterFormatter=_masterFormatter;
- (void)finalize;
- (void)dealloc;
@property(readonly, copy) NSArray *fallbackDescriptor;
- (void)_releaseIvars;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)_orderedNonEmptyKeysFromComponents:(id)arg1;
- (id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2;
@property(readonly) NSArray *orderedTemplate;
@property long long ordering;
- (_Bool)fullComponentsAreValid:(id)arg1;
@property(readonly) NSArray *orderedKeysOfInterest;
- (CDUnknownBlockType)defaultInitialsCreator;
@property _Bool ignoreDelimiter;
@property(readonly) _Bool isEnabled;
@property(readonly) _Bool shouldFallBack;
@property(readonly) NSSet *keysOfInterest;
@property(readonly) NSDictionary *alterations;
- (id)initWithMasterFormatter:(id)arg1;

@end

