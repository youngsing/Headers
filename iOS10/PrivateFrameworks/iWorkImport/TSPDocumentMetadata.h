//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSPDocumentMetadata : TSPObject
{
    _Bool _isInCollaborationModeForArchiving;
}

- (void)saveToArchiver:(id)arg1;
- (void)takeSnapshotWithCollaborationMode:(_Bool)arg1;
- (id)packageLocator;
- (long long)tsp_identifier;
- (id)initFromUnarchiver:(id)arg1;

@end
