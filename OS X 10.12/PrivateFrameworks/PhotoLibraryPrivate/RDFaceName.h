//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSDate, NSNumber, NSString, RDFaceNameTable;

@interface RDFaceName : RDModel
{
}

+ (Class)tableClass;
@property(readonly, copy, nonatomic) NSData *attrs;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, copy, nonatomic) NSNumber *manualOrder;
@property(readonly, nonatomic) BOOL similarFacesOpen;
@property(readonly, nonatomic) BOOL similarFacesCached;
@property(readonly, copy, nonatomic) NSString *email;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *keyVersionUuid;
@property(readonly, copy, nonatomic) NSNumber *faceKey;
@property(readonly, nonatomic) RDFaceNameTable *table;

@end

