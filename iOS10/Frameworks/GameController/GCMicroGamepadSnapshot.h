//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/GCMicroGamepad.h>

@class NSData;

@interface GCMicroGamepadSnapshot : GCMicroGamepad
{
    NSData *snapshotData;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (id)init;
@property(copy) NSData *snapshotData; // @synthesize snapshotData;

@end
