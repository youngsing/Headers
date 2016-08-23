//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CC_SHA1state_st {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8[16];
    int _field9;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct IPCMessage;

struct NEAgentFilterPluginCallbacks {
    CDUnknownFunctionPointerType PluginInit;
    CDUnknownFunctionPointerType PluginStart;
    CDUnknownFunctionPointerType PluginStop;
    CDUnknownFunctionPointerType PluginEnvironmentEvent;
    CDUnknownFunctionPointerType PluginDispose;
};

struct _VPNConfigurationPrivate {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
    struct __CFString *_field2;
    unsigned char _field3;
    struct __CFRunLoopSource *_field4;
    struct __CFRunLoopSource *_field5;
    struct __CFRunLoopSource *_field6;
    struct __CFArray *_field7;
    CDUnknownFunctionPointerType _field8;
    CDStruct_e097db04 _field9;
    CDUnknownFunctionPointerType _field10;
    CDStruct_e097db04 _field11;
    id _field12;
    void *_field13;
    struct ipc_queue _field14;
    id _field15;
    struct {
        struct _VPNConfigurationPrivate *_field1;
    } _field16;
};

struct __CFRunLoopSource;

struct ipc_queue {
    struct IPCMessage *_field1;
    struct IPCMessage **_field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

