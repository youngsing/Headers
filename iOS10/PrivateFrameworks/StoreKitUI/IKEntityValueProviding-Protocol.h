//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString, NSURL;

@protocol IKEntityValueProviding <NSObject>
- (NSDictionary *)valuesForEntityProperties:(NSSet *)arg1;
- (id)valueForEntityProperty:(NSString *)arg1;
- (NSURL *)imageURLForEntityArtworkProperty:(NSString *)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (NSDictionary *)entityUniqueIdentifier;

@optional
- (NSString *)stringValueWithNativeValue:(id)arg1 forProperty:(NSString *)arg2;
- (id)nativeValueForStringValue:(NSString *)arg1 forProperty:(NSString *)arg2;
@end
