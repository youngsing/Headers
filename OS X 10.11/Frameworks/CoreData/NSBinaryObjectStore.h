//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSMappedObjectStore.h>

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStore : NSMappedObjectStore
{
}

+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
- (id *)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)type;
- (void)saveDocumentToPath:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;

@end

