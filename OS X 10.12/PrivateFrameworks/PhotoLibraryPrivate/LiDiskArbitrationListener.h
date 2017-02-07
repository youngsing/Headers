//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LiDiskDelegate, OS_dispatch_queue;

@interface LiDiskArbitrationListener : NSObject
{
    struct __DASession *_diskSession;
    id <LiDiskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_daQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *daQueue; // @synthesize daQueue=_daQueue;
@property(nonatomic) __weak id <LiDiskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct __DASession *diskSession; // @synthesize diskSession=_diskSession;
- (void).cxx_destruct;
- (BOOL)disk:(struct __DADisk *)arg1 willUnmountOrEject:(unsigned char)arg2 dissentReason:(id *)arg3;
- (void)unregisterForDACallbacksForSession:(struct __DASession *)arg1;
- (void)registerForDACallbacks;
- (id)initWithDiskDelegate:(id)arg1;
- (id)init;
- (void)stopListening;
- (void)dealloc;

@end
