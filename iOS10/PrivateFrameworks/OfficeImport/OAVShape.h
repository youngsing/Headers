//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVShape : NSObject
{
}

+ (id)readFromShape:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (void)readBoundsAndGeometryOfPolylineFromManager:(id)arg1 toShape:(id)arg2 state:(id)arg3;
+ (id)managerWithShape:(struct _xmlNode *)arg1 state:(id)arg2;
+ (unsigned short)typeWithShape:(struct _xmlNode *)arg1 state:(id)arg2;

@end
