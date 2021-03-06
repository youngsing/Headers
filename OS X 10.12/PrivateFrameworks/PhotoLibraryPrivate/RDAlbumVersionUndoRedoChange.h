//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class LiRidList, NSSet, NSString, RDDatabase;

@interface RDAlbumVersionUndoRedoChange : RDUndoRedoChange
{
    NSString *_albumUuid;
    RDDatabase *_database;
    unsigned char _changeType;
    LiRidList *_versionIds;
    NSSet *_versionUuids;
}

@property(readonly, nonatomic) NSSet *versionUuids; // @synthesize versionUuids=_versionUuids;
@property(readonly, nonatomic) LiRidList *versionIds; // @synthesize versionIds=_versionIds;
@property(readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)description;
- (void)redo;
- (void)undo;
- (id)album;
- (id)initWithAlbum:(id)arg1 changeType:(unsigned char)arg2 versions:(id)arg3;

@end

