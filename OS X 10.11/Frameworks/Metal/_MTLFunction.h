//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionSPI-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice;

@interface _MTLFunction : NSObject <MTLFunctionSPI>
{
    id <MTLDevice> _device;
    unsigned long long _functionType;
    NSString *_name;
    struct MTLLibraryData *_libraryData;
    id _vendorPrivate;
    NSArray *_vertexAttributes;
}

@property(readonly) id vendorPrivate; // @synthesize vendorPrivate=_vendorPrivate;
@property(readonly) struct MTLLibraryData *libraryData; // @synthesize libraryData=_libraryData;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long functionType; // @synthesize functionType=_functionType;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)setVendorPrivate:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData *)arg3 device:(id)arg4;

// Remaining properties
@property(readonly) unsigned long long bitCodeOffset; // @dynamic bitCodeOffset;
@property(readonly, copy) NSString *debugDescription;
@property(copy) NSString *filePath; // @dynamic filePath;
@property(readonly) unsigned long long hash;
@property long long lineNumber; // @dynamic lineNumber;
@property(readonly) unsigned long long renderTargetArrayIndexType; // @dynamic renderTargetArrayIndexType;
@property(readonly) Class superclass;
@property(readonly) NSArray *vertexAttributes; // @dynamic vertexAttributes;

@end

