//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DRErase : NSObject
{
    void *_ref;
}

+ (id)eraseForDevice:(id)arg1;
+ (void)initialize;
+ (BOOL)isPropertyKey:(id)arg1;
+ (void)setupBindings;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)device;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)status;
- (void)start;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (struct DREraserObject *)_obj;
- (int)_start;
- (void)setEraseType:(id)arg1;
- (id)eraseType;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)arg1;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

