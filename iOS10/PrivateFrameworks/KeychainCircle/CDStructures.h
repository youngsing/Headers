//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct ccdigest_info {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    char *_field5;
    void *_field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
};

struct ccmode_gcm {
    unsigned long long _field1;
    int _field2;
    unsigned long long _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    void *_field10;
};

struct ccrng_state {
    CDUnknownFunctionPointerType _field1;
};

struct ccsrp_ctx {
    struct ccsrp_ctx_header _field1;
};

struct ccsrp_ctx_header {
    struct ccdigest_info *_field1;
    CDUnion_089e675c _field2;
    struct ccrng_state *_field3;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :16;
    } _field4;
    unsigned char _field5[7];
    unsigned long long _field6[1];
};

struct cczp;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1[16];
} CDStruct_60067b7e;

typedef struct CDStruct_183601bc;

#pragma mark Typedef'd Unions

typedef union {
    unsigned long long *_field1;
    struct cczp *_field2;
} CDUnion_1ea3dc14;

typedef union {
    union {
        unsigned long long *_field1;
        struct cczp *_field2;
        CDUnion_1ea3dc14 _field3;
    } _field1;
    CDStruct_183601bc *_field2;
    union {
        CDUnion_1ea3dc14 _field1;
        CDStruct_183601bc *_field2;
    } _field3;
} CDUnion_089e675c;

