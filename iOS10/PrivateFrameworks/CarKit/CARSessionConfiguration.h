//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CARSessionConfiguration : NSObject
{
    _Bool _rightHandDrive;
    _Bool _manufacturerIconVisible;
    NSString *_name;
    NSString *_modelName;
    unsigned long long _transportType;
    unsigned long long _limitableUserInterfaces;
    NSArray *_manufacturerIcons;
    NSString *_manufacturerIconLabel;
    NSString *_endpointIdentifier;
}

+ (id)_descriptionForLimitableUserInterfaces:(unsigned long long)arg1;
+ (unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)arg1;
+ (id)_descriptionForTransportType:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
@property(readonly, nonatomic) _Bool manufacturerIconVisible; // @synthesize manufacturerIconVisible=_manufacturerIconVisible;
@property(readonly, copy, nonatomic) NSString *manufacturerIconLabel; // @synthesize manufacturerIconLabel=_manufacturerIconLabel;
@property(readonly, copy, nonatomic) NSArray *manufacturerIcons; // @synthesize manufacturerIcons=_manufacturerIcons;
@property(readonly, nonatomic) unsigned long long limitableUserInterfaces; // @synthesize limitableUserInterfaces=_limitableUserInterfaces;
@property(readonly, nonatomic) _Bool rightHandDrive; // @synthesize rightHandDrive=_rightHandDrive;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;

@end

