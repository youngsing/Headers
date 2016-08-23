//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface NSPrinter : NSObject <NSCopying, NSCoding>
{
    NSString *_printerName;
    void *_printer;
    NSDictionary *_cachedDeviceDescription;
    int _ppdCreationNum;
    void *_ppdNodes;
    void *_ppdPriv;
    id _reserved[3];
}

+ (id)printerWithType:(id)arg1;
+ (id)printerWithName:(id)arg1;
+ (id)printerTypes;
+ (id)printerNames;
+ (void)_flushCachedCarbonPrintersByName;
+ (id)_printerForPrinter:(struct OpaquePMPrinter *)arg1;
+ (id)printerWithName:(id)arg1 domain:(id)arg2 includeUnavailable:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)_compatibility_initWithUnkeyedCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSDictionary *deviceDescription;
- (id)stringListForKey:(id)arg1 inTable:(id)arg2;
- (id)stringForKey:(id)arg1 inTable:(id)arg2;
- (struct CGSize)sizeForKey:(id)arg1 inTable:(id)arg2;
- (struct CGRect)rectForKey:(id)arg1 inTable:(id)arg2;
- (int)intForKey:(id)arg1 inTable:(id)arg2;
- (float)floatForKey:(id)arg1 inTable:(id)arg2;
- (BOOL)booleanForKey:(id)arg1 inTable:(id)arg2;
- (BOOL)isKey:(id)arg1 inTable:(id)arg2;
- (unsigned long long)statusForTable:(id)arg1;
- (struct CGSize)pageSizeForPaper:(id)arg1;
@property(readonly) long long languageLevel;
@property(readonly, copy) NSString *type;
@property(readonly, copy) NSString *name;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)_initWithName:(id)arg1 printer:(struct OpaquePMPrinter *)arg2;
- (struct OpaquePMPrinter *)_printer;
- (id)note;
- (id)host;
- (id)domain;
- (BOOL)isOutputStackInReverseOrder;
- (BOOL)isFontAvailable:(id)arg1;
- (BOOL)isColor;
- (BOOL)acceptsBinary;
- (struct CGRect)imageRectForPaper:(id)arg1;
- (void)_deallocatePPDStuff;
- (id)processKeyword:(char *)arg1 option:(char *)arg2 keyTran:(char *)arg3 arg:(char *)arg4 argTran:(char *)arg5;
- (id)_setUIConstraints:(char *)arg1;
- (id)_setOrderDependency:(char *)arg1;
- (id)_appendKey:(const char *)arg1 option:(const char *)arg2 value:(const char *)arg3 inKeyNode:(CDStruct_d48118a8 *)arg4;
- (CDStruct_d48118a8 *)_makeKeyNode:(const char *)arg1 inKeyNode:(CDStruct_d48118a8 *)arg2;
- (id)_appendStringInKeyNode:(CDStruct_d48118a8 *)arg1 key:(const char *)arg2 value:(const char *)arg3;
- (id)_keyListForKeyNode:(CDStruct_d48118a8 *)arg1;
- (CDStruct_d48118a8 *)_getNodeForKey:(id)arg1 inTable:(id)arg2;
- (void)_allocatePPDStuffAndParse;
- (id)_freeNodes;
- (CDStruct_d48118a8 *)_makeTable:(const char *)arg1 inNode:(CDStruct_d48118a8 *)arg2;
- (char *)_allocString:(const char *)arg1;
- (id)_freeNode:(CDStruct_d48118a8 *)arg1;
- (id)_makeRootNode;
- (CDStruct_d48118a8 *)_newNode:(long long)arg1;

@end
