//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class NSSet;

@interface RDVersionsInTrashChange : RDUndoRedoChange
{
    NSSet *_versionAddresses;
    BOOL _putInTrash;
    unsigned short _reason;
}

@property(readonly, nonatomic) BOOL putInTrash; // @synthesize putInTrash=_putInTrash;
@property(readonly, retain, nonatomic) NSSet *versionAddresses; // @synthesize versionAddresses=_versionAddresses;
- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (id)description;
- (id)initWithVersionAddresses:(id)arg1 putInTrash:(BOOL)arg2 reason:(unsigned short)arg3;

@end
