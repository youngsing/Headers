//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double x;
    double y;
    double z;
    double magneticHeading;
    double trueHeading;
    double accuracy;
    double timestamp;
    double temperature;
    double magnitude;
    double inclination;
    int calibration;
} CDStruct_b560b707;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
} CDStruct_7a56d1c9;

typedef struct {
    char identifier[512];
    int type;
    _Bool notifyOnEntry;
    _Bool notifyOnExit;
    union {
        struct {
            char proximityUUID[512];
            unsigned short major;
            unsigned short minor;
            int definitionMask;
            _Bool notifyEntryStateOnDisplay;
        } beaconAttributes;
        struct {
            CDStruct_2c43369c center;
            double radius;
            double desiredAccuracy;
        } circularAttributes;
    } ;
} CDStruct_f756f8ea;
