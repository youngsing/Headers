//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemMigration/SMMigrationRequest.h>

#import <SystemMigration/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface SMWindowsMigrationRequest : SMMigrationRequest <NSSecureCoding>
{
    NSString *_destinationPath;
    NSMutableArray *_systemComponentDicts;
    NSMutableArray *_otherDiskComponentDicts;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSMutableArray *otherDiskComponentDicts; // @synthesize otherDiskComponentDicts=_otherDiskComponentDicts;
@property(retain) NSMutableArray *systemComponentDicts; // @synthesize systemComponentDicts=_systemComponentDicts;
@property(copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (void).cxx_destruct;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)updateAutoLoginUser;
- (id)description;
- (id)exportXPCDict;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)init;

@end
