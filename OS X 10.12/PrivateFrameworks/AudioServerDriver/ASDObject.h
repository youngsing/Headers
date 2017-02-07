//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDPlugin;

@interface ASDObject : NSObject
{
    unsigned int _objectID;
    ASDObject *_owner;
    ASDPlugin *_plugin;
}

@property(nonatomic) __weak ASDPlugin *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) __weak ASDObject *owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned int objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isKindOfAudioClass:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int objectClass; // @dynamic objectClass;
@property(readonly, nonatomic) unsigned int baseClass; // @dynamic baseClass;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (id)initWithPlugin:(id)arg1;
- (id)init;

@end
