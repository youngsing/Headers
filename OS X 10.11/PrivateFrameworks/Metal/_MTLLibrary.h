//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLLibrary-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol MTLDevice;

@interface _MTLLibrary : NSObject <MTLLibrary>
{
    NSString *_label;
    id <MTLDevice> _device;
    NSArray *_functionNames;
    struct MTLLibraryData *_libraryData;
    NSMutableDictionary *_functionDictionary;
}

@property(readonly, retain, nonatomic) NSMutableDictionary *functionDictionary; // @synthesize functionDictionary=_functionDictionary;
@property(readonly) struct MTLLibraryData *libraryData; // @synthesize libraryData=_libraryData;
@property(readonly, retain) NSArray *functionNames; // @synthesize functionNames=_functionNames;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDefaultBundle:(id)arg1;
- (id)initWithSharedLibrary:(id)arg1 device:(id)arg2;
- (id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithRequestData:(void *)arg1 requestSize:(unsigned long long)arg2 requestType:(int)arg3 device:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)newFunctionWithName:(id)arg1;
- (id)initWithData:(struct dispatch_data_s *)arg1 device:(id)arg2 error:(id *)arg3;
- (id)initWithFile:(id)arg1 device:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

