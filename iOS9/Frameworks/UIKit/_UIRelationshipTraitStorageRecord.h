//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSSet, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding>
{
    UITraitCollection *_traitCollection;
    NSSet *_addedObjects;
    NSSet *_removedObjects;
}

@property(readonly, nonatomic) NSSet *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(readonly, nonatomic) NSSet *addedObjects; // @synthesize addedObjects=_addedObjects;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;

@end

