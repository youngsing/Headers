//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class NSData;

@protocol PQLInjecting <NSObject>
@property(readonly, nonatomic) NSData *sql;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;

@optional
- (id)bindValuesToKeepAlive;
@end
