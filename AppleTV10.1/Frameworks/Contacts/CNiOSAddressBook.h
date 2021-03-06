//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CNiOSAddressBook : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_addressBookPool;
    CDUnknownBlockType _addressBookProvider;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
}

+ (void *)newAddressBookWithEnvironment:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // @synthesize memoryMonitoringSource=_memoryMonitoringSource;
@property(readonly, copy, nonatomic) CDUnknownBlockType addressBookProvider; // @synthesize addressBookProvider=_addressBookProvider;
@property(readonly, nonatomic) NSMutableSet *addressBookPool; // @synthesize addressBookPool=_addressBookPool;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)flushPool;
- (void)performAsynchronousWorkWithInvalidatedAddressBook:(CDUnknownBlockType)arg1;
- (void)performSynchronousWorkWithInvalidatedAddressBook:(CDUnknownBlockType)arg1;
- (void *)preparedAddressBook:(void *)arg1;
- (void)pushAddressBook:(void *)arg1;
- (void *)popAddressBook;
- (void)dealloc;
- (id)initWithAddressBookProvider:(CDUnknownBlockType)arg1;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)init;

@end

