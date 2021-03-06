//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrintingPrivate/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface PKPrinter : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_dnssdName;
    NSMutableArray *_txts;
}

+ (BOOL)supportsSecureCoding;
+ (id)softwareUpdateRepresentation:(id)arg1;
+ (id)model:(id)arg1;
+ (id)make:(id)arg1;
+ (id)searchForKeys:(id)arg1 deviceID:(id)arg2;
@property(retain, nonatomic) NSMutableArray *txts; // @synthesize txts=_txts;
@property(copy, nonatomic) NSString *dnssdName; // @synthesize dnssdName=_dnssdName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)removeTxtRecordsWithInterfaceIndex:(unsigned int)arg1 ofType:(id)arg2;
- (unsigned long long)appendTxtRecords:(id)arg1;
- (BOOL)queueExists:(id)arg1;
@property(readonly, nonatomic) long long type;
- (id)txtOfType:(id)arg1;
- (id)txt;
@property(readonly, nonatomic) unsigned long long distance;
- (id)ty;
@property(readonly, nonatomic) unsigned long long attributes;
- (unsigned long long)stateReasons;
@property(readonly, nonatomic) unsigned long long jobTypesSupported;
@property(readonly, nonatomic) unsigned long long authentication;
@property(readonly, nonatomic) NSString *sanatizedModel;
@property(readonly, nonatomic) NSString *sanatizedMake;
@property(readonly, nonatomic) NSString *sanitizedLocation;
@property(readonly, nonatomic) NSString *sanitizedName;
- (id)URLs;
@property(readonly, nonatomic) NSString *URL;
@property(readonly, nonatomic) NSString *adminURL;
@property(readonly, nonatomic) NSString *resourcePath;
@property(readonly, nonatomic) NSString *product;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSString *location;
@property(readonly, nonatomic) NSString *name;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initPrinterWithName:(id)arg1 txts:(id)arg2;
- (id)initPrinterWithName:(id)arg1;
- (id)init;

@end

