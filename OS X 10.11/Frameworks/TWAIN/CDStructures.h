//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CallBackInfo {
    struct TW_IDENTITY client;
    struct TW_IDENTITY *clientPtr;
    struct TW_CALLBACK callback;
    unsigned char got_MSG_PROCESSEVENT;
    unsigned short pendingCallback;
};

struct TW_CALLBACK {
    char *CallBackProc;
    char *RefCon;
    short Message;
};

struct TW_IDENTITY {
    char *Id;
    struct TW_VERSION Version;
    unsigned short ProtocolMajor;
    unsigned short ProtocolMinor;
    unsigned int SupportedGroups;
    unsigned char Manufacturer[34];
    unsigned char ProductFamily[34];
    unsigned char ProductName[34];
};

struct TW_VERSION {
    unsigned short MajorNum;
    unsigned short MinorNum;
    unsigned short Language;
    unsigned short Country;
    unsigned char Info[34];
};

