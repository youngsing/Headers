//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ABAccountCollection;

__attribute__((visibility("hidden")))
@interface ABPersistentStoreCoordinatorFactory : NSObject
{
    id <ABAccountCollection> _repository;
    BOOL _readOnly;
}

- (id)builderWithStoreDescription:(id)arg1;
- (id)makeCoordinatorWithStoreAtDatabasePath:(id)arg1 storeDescription:(id)arg2;
- (id)addStoresForAccounts:(id)arg1 withStoreBuilder:(id)arg2;
- (id)pool_makeCoordinatorForAllAvailableSources;
- (id)makeCoordinatorForAllAvailableSources;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 readOnly:(BOOL)arg2;

@end

