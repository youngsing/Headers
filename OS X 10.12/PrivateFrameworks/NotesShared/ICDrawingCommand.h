//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject
{
    BOOL _hidden;
    ICDrawingCommandData *_data;
    struct TopoID _timestamp;
}

@property(readonly, nonatomic) struct TopoID timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) ICDrawingCommandData *data; // @synthesize data=_data;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualDrawingVisibleCommand:(id)arg1;
- (id)initWithCommand:(id)arg1 hidden:(BOOL)arg2 timestamp:(struct TopoID)arg3;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;

@end

