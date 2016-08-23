//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SyncServices/NSObject-Protocol.h>

@class NSArray, NSKeyedUnarchiver, NSString;

@protocol NSKeyedUnarchiverDelegate <NSObject>

@optional
- (void)unarchiverDidFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiverWillFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiver:(NSKeyedUnarchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (id)unarchiver:(NSKeyedUnarchiver *)arg1 didDecodeObject:(id)arg2;
- (Class)unarchiver:(NSKeyedUnarchiver *)arg1 cannotDecodeObjectOfClassName:(NSString *)arg2 originalClasses:(NSArray *)arg3;
@end
