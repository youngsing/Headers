//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEDesc {
    unsigned int _field1;
    struct OpaqueAEDataStorageType **_field2;
};

struct BulkNewPropertyData {
    unsigned int _field1;
    struct ICAPropertyInfo _field2;
    unsigned int _field3;
};

struct FSRef {
    unsigned char hidden[80];
};

struct ICAMessage {
    unsigned int messageType;
    unsigned int startByte;
    void *dataPtr;
    unsigned int dataSize;
    unsigned int dataType;
};

struct ICAObjectInfo {
    unsigned int objectType;
    unsigned int objectSubtype;
};

struct ICAPropertyInfo {
    unsigned int propertyType;
    unsigned int dataType;
    unsigned int dataSize;
    unsigned int dataFlags;
};

struct ICDHeader {
    short err;
    unsigned long long refcon;
};

struct ICD_BulkNewPropertyPB {
    struct ICDHeader _field1;
    unsigned int _field2;
    struct BulkNewPropertyData _field3[1];
};

struct ICD_GetPropertyDataPB {
    struct ICDHeader header;
    unsigned int parentObject;
    struct ICAObjectInfo parentObjectInfo;
    unsigned int connectionID;
    unsigned int property;
    struct ICAPropertyInfo propertyInfo;
    unsigned int startByte;
    unsigned int requestedSize;
    void *dataPtr;
    unsigned int actualSize;
    unsigned int dataType;
};

struct ICD_ObjectSendMessagePB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    struct ICAMessage message;
    unsigned int totalDataSize;
    unsigned int result;
};

struct ICD_ScannerCloseSessionPB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    unsigned int sessionID;
};

struct ICD_ScannerGetParametersPB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    unsigned int sessionID;
    struct __CFDictionary *theDict;
};

struct ICD_ScannerInitializePB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    unsigned int sessionID;
};

struct ICD_ScannerOpenSessionPB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    unsigned int sessionID;
};

struct ICD_ScannerSetParametersPB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    unsigned int sessionID;
    struct __CFDictionary *theDict;
};

struct ICD_ScannerStartPB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    unsigned int sessionID;
};

struct ICD_ScannerStatusPB {
    struct ICDHeader header;
    unsigned int object;
    struct ICAObjectInfo objectInfo;
    unsigned int connectionID;
    unsigned int sessionID;
    unsigned int status;
};

struct OpaqueAEDataStorageType;

struct __CFDictionary;

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    double _field6;
} CDStruct_79f9e052;

