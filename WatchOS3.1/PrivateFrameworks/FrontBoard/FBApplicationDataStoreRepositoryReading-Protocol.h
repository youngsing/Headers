//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol FBApplicationDataStoreRepositoryReadingDelegate;

@protocol FBApplicationDataStoreRepositoryReading <NSObject>
@property(nonatomic) id <FBApplicationDataStoreRepositoryReadingDelegate> delegate;
- (void)close;
- (void)objectForKeys:(NSArray *)arg1 forAllApplicationsWithResult:(void (^)(id))arg2;
- (void)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withResult:(void (^)(id))arg3;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (_Bool)containsKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (NSArray *)keysForApplication:(NSString *)arg1;
- (NSArray *)applicationIdentifiersWithState;
@end

