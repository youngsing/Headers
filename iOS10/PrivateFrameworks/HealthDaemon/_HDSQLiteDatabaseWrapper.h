//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase;

@interface _HDSQLiteDatabaseWrapper : NSObject
{
    HDSQLiteDatabase *_database;
    unsigned long long _generation;
    unsigned long long _threadID;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)typeString;
- (void)captureThreadInfo;
- (id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2;

@end

