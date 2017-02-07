//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NSSecureCoding-Protocol.h>

@class NSArray, NSData;

@interface NFTag : NSObject <NSSecureCoding>
{
    unsigned int _technology;
    NSData *_tagID;
    NSData *_IDm;
    NSData *_PMm;
    NSData *_SystemCode;
    NSArray *_allSystemCodes;
    NSData *_AppData;
    NSData *_UID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *UID; // @synthesize UID=_UID;
@property(readonly, nonatomic) NSData *AppData; // @synthesize AppData=_AppData;
@property(readonly, nonatomic) NSArray *allSystemCodes; // @synthesize allSystemCodes=_allSystemCodes;
@property(readonly, nonatomic) NSData *SystemCode; // @synthesize SystemCode=_SystemCode;
@property(readonly, nonatomic) NSData *PMm; // @synthesize PMm=_PMm;
@property(readonly, nonatomic) NSData *IDm; // @synthesize IDm=_IDm;
@property(readonly, nonatomic) NSData *tagID; // @synthesize tagID=_tagID;
@property(readonly, nonatomic) unsigned int technology; // @synthesize technology=_technology;
- (id)getSystemCodeListString;
- (void)_setSystemCodes:(id)arg1;
- (void)_setAppData:(id)arg1;
- (void)_setUID:(id)arg1;
- (void)_setTechnology:(unsigned int)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setSystemCode:(id)arg1;
- (void)_setPMm:(id)arg1;
- (void)_setIDm:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
