//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AUDistanceAttenuationPair {
    float _field1;
    float _field2;
};

struct AUDistanceAttenuation_Data {
    unsigned int _field1;
    struct AUDistanceAttenuationPair _field2[1];
};

struct AudioUnitEvent {
    unsigned int _field1;
    union {
        struct AudioUnitParameter _field1;
        struct AudioUnitProperty _field2;
    } _field2;
};

struct AudioUnitFrequencyResponseBin {
    double _field1;
    double _field2;
};

struct AudioUnitParameter {
    struct ComponentInstanceRecord *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct AudioUnitParameterInfo {
    char name[52];
    struct __CFString *unitName;
    unsigned int clumpID;
    struct __CFString *cfNameString;
    unsigned int unit;
    float minValue;
    float maxValue;
    float defaultValue;
    unsigned int flags;
};

struct AudioUnitProperty {
    struct ComponentInstanceRecord *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct CAAUParameter {
    struct ComponentInstanceRecord *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct AudioUnitParameterInfo _field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    short _field8;
    struct __CFArray *_field9;
};

struct CAHALAudioObject {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFString;

