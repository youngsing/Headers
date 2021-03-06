//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXScene3D : NSObject
{
}

+ (_Bool)isEmpty:(id)arg1;
+ (void)writeScene3D:(id)arg1 to:(id)arg2;
+ (id)readScene3DFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)readBackdropFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readLightRigFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readCameraFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)lightRigDirectionEnumMap;
+ (id)lightRigTypeEnumMap;
+ (id)cameraTypeEnumMap;
+ (void)writeLightRig:(id)arg1 to:(id)arg2;
+ (void)writeCamera:(id)arg1 to:(id)arg2;
+ (void)writeRotation3D:(id)arg1 to:(id)arg2;
+ (void)writeBackdrop:(id)arg1 to:(id)arg2;

@end

