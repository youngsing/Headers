//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol UAPasteboardItemProviding <NSObject>
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSUUID *uuid;
- (void)getDataWithCompletionBlock:(void (^)(NSInputStream *, NSError *))arg1;
@end
