//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSFetchRequest, NSManagedObjectID;

@interface _PHFetchRequestWrapper : NSObject <NSCopying>
{
    unsigned long long _hash;
    NSFetchRequest *_fetchRequest;
    NSManagedObjectID *_containerIdentifier;
}

@property(readonly, nonatomic) NSManagedObjectID *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) unsigned long long hash; // @synthesize hash=_hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2;

@end
