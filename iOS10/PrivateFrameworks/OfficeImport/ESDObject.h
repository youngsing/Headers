//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ESDContainer;

__attribute__((visibility("hidden")))
@interface ESDObject : NSObject
{
    struct EshObject *mEshObject;
    ESDContainer *mParent;
    _Bool mIsChart;
}

- (void)setChart:(_Bool)arg1;
- (_Bool)isChart;
- (void)writeToWriter:(struct OcWriter *)arg1;
- (id)parent;
- (struct EshObject *)eshObject;
- (void)dealloc;
- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (id)initWithType:(unsigned short)arg1;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (int)shapeID;
- (struct EshGroup *)eshGroup;
- (struct EshShape *)eshShape;
- (id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;

@end

