//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCDocumentItem, BRCItemID, BRCLocalItem, BRCPQLConnection, BRCRelativePath, BRCServerItem, NSString, NSURL;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding>
{
    BRCAccountSession *_session;
    union {
        struct {
            unsigned int parentItemID:1;
            unsigned int relpath:1;
            unsigned int pathMatch:1;
            unsigned int faultedMatch:1;
            unsigned int byIDMatch:1;
            unsigned int reservedMatch:1;
        } ;
        unsigned int value;
    } _hasFetched;
    BRCRelativePath *__relpath;
    BRCPQLConnection *_db;
    _Bool _allowAppLibraryRoot;
    NSURL *_url;
    BRCRelativePath *_parentRelpath;
    BRCItemID *_parentItemID;
    NSString *_filename;
    NSString *_parentPath;
    BRCLocalItem *_byIDLocalItem;
    BRCServerItem *_byIDServerItem;
    unsigned long long _byIDDiffs;
    BRCLocalItem *_byPathLocalItem;
    BRCServerItem *_byPathServerItem;
    unsigned long long _byPathDiffs;
    BRCDocumentItem *_faultedLocalItem;
    BRCServerItem *_faultedServerItem;
    BRCRelativePath *_faultedRelpath;
    unsigned long long _faultedDiffs;
    BRCLocalItem *_reservedLocalItem;
    BRCServerItem *_reservedServerItem;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) BRCRelativePath *parentRelpath; // @synthesize parentRelpath=_parentRelpath;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)clearReservedItem;
@property(readonly, nonatomic) BRCServerItem *reservedServerItem; // @synthesize reservedServerItem=_reservedServerItem;
@property(readonly, nonatomic) BRCLocalItem *reservedLocalItem; // @synthesize reservedLocalItem=_reservedLocalItem;
@property(readonly, nonatomic) CDStruct_177058d5 reservedMatch;
- (void)_fetchReservedPathMatch;
@property(readonly, nonatomic) BRCDocumentItem *bySharedEnclosureDocItem;
@property(readonly, nonatomic) unsigned short pathType;
- (void)clearFaultedItem;
@property(readonly, nonatomic) unsigned long long faultedDiffs; // @synthesize faultedDiffs=_faultedDiffs;
@property(readonly, nonatomic) BRCDocumentItem *faultedLocalItem; // @synthesize faultedLocalItem=_faultedLocalItem;
@property(readonly, nonatomic) BRCServerItem *faultedServerItem; // @synthesize faultedServerItem=_faultedServerItem;
@property(readonly, nonatomic) BRCRelativePath *faultedRelpath; // @synthesize faultedRelpath=_faultedRelpath;
- (void)_fetchFaultedPathMatch;
@property(readonly, nonatomic) CDStruct_177058d5 faultedMatch;
- (void)refreshFaultedDiffs;
- (void)clearByIDItem;
@property(readonly, nonatomic) unsigned long long byIDDiffs; // @synthesize byIDDiffs=_byIDDiffs;
@property(readonly, nonatomic) BRCServerItem *byIDServerItem; // @synthesize byIDServerItem=_byIDServerItem;
@property(readonly, nonatomic) BRCRelativePath *relpath;
@property(readonly, nonatomic) BRCLocalItem *byIDLocalItem; // @synthesize byIDLocalItem=_byIDLocalItem;
@property(readonly, nonatomic) CDStruct_177058d5 byIDMatch;
- (void)_fetchIDMatch;
- (void)refreshByIDDiffs;
- (void)clearByPathItem;
@property(readonly, nonatomic) unsigned long long byPathDiffs; // @synthesize byPathDiffs=_byPathDiffs;
@property(readonly, nonatomic) BRCServerItem *byPathServerItem; // @synthesize byPathServerItem=_byPathServerItem;
@property(readonly, nonatomic) BRCRelativePath *byPathRelpath;
@property(readonly, nonatomic) BRCLocalItem *byPathLocalItem; // @synthesize byPathLocalItem=_byPathLocalItem;
@property(readonly, nonatomic) CDStruct_177058d5 byPathMatch;
- (void)_fetchPathMatch;
- (void)refreshByPathDiffs;
- (void)_fetchRelPath;
@property(readonly, nonatomic) BRCItemID *parentItemID; // @synthesize parentItemID=_parentItemID;
- (void)closePaths;
- (_Bool)resolveParentAndKeepOpenMustExist:(_Bool)arg1 errcode:(int *)arg2;
- (_Bool)resolveAndKeepOpenWithError:(id *)arg1;
- (id)initWithURL:(id)arg1 session:(id)arg2;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(_Bool)arg2 session:(id)arg3 db:(id)arg4;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(_Bool)arg2 session:(id)arg3;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)matchLookupItemsWithDisk;
- (void)handleReservedPathMatchesIfNeeded;
- (void)markPathMatchLostIfLocationDoesntMatch:(CDStruct_177058d5 *)arg1;
- (void)didApplyChangesAtPath:(id)arg1 filename:(id)arg2 li:(id)arg3 si:(id)arg4;
- (_Bool)tryToDeleteItemInNamespace:(unsigned char)arg1;
- (void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2;
- (_Bool)_canUpdatePathMatch:(const CDStruct_177058d5 *)arg1 hasAdditionsToApply:(_Bool)arg2;
- (_Bool)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg1;
- (CDStruct_177058d5)_pathMatchInNamespace:(unsigned char)arg1;
- (void)_clearNamespace:(unsigned char)arg1;
- (_Bool)_bounceBouncesHiddenByFault:(id)arg1;

@end

