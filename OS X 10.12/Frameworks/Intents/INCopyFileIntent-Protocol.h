//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol INCopyFileIntent <NSObject, JSExport>
@property(copy) NSArray *properties;
@property(copy) NSString *destinationName;
@property(copy) NSString *destinationType;
@property(copy) NSString *sourceName;
@property(copy) NSString *sourceType;
@property(copy) NSString *entityName;
@property(copy) NSString *entityType;
- (id)init;
@end

