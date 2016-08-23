//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFZipEndOfCentralDirectoryRecord : NSObject
{
    unsigned short _numberOfDisk;
    unsigned short _diskWhereCentralDirectoryStarts;
    unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short _totalNumberOfCentralDirectoryRecords;
    unsigned int _byteSizeOfCentralDirectory;
    unsigned int _centralDirectoryOffset;
    unsigned short _commentLength;
    NSString *_comment;
}

@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) unsigned short commentLength; // @synthesize commentLength=_commentLength;
@property(nonatomic) unsigned int centralDirectoryOffset; // @synthesize centralDirectoryOffset=_centralDirectoryOffset;
@property(nonatomic) unsigned int byteSizeOfCentralDirectory; // @synthesize byteSizeOfCentralDirectory=_byteSizeOfCentralDirectory;
@property(nonatomic) unsigned short totalNumberOfCentralDirectoryRecords; // @synthesize totalNumberOfCentralDirectoryRecords=_totalNumberOfCentralDirectoryRecords;
@property(nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk; // @synthesize numberOfCentralDirectoryRecordsOnThisDisk=_numberOfCentralDirectoryRecordsOnThisDisk;
@property(nonatomic) unsigned short diskWhereCentralDirectoryStarts; // @synthesize diskWhereCentralDirectoryStarts=_diskWhereCentralDirectoryStarts;
@property(nonatomic) unsigned short numberOfDisk; // @synthesize numberOfDisk=_numberOfDisk;
- (void)appendToData:(id)arg1;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

