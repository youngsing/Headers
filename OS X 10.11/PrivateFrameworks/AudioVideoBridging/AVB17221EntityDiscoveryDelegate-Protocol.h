//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVB17221Entity, AVB17221EntityDiscovery;

@protocol AVB17221EntityDiscoveryDelegate
- (void)didUpdateLocalEntity:(AVB17221Entity *)arg1 changedProperties:(unsigned long long)arg2 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg3;
- (void)didRediscoverLocalEntity:(AVB17221Entity *)arg1 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg2;
- (void)didRemoveLocalEntity:(AVB17221Entity *)arg1 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg2;
- (void)didAddLocalEntity:(AVB17221Entity *)arg1 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg2;
- (void)didUpdateRemoteEntity:(AVB17221Entity *)arg1 changedProperties:(unsigned long long)arg2 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg3;
- (void)didRediscoverRemoteEntity:(AVB17221Entity *)arg1 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg2;
- (void)didRemoveRemoteEntity:(AVB17221Entity *)arg1 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg2;
- (void)didAddRemoteEntity:(AVB17221Entity *)arg1 on17221EntityDiscovery:(AVB17221EntityDiscovery *)arg2;
@end

