//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/NSUserActivity.h>

@interface NSUserActivity (NSUserActivityPayloadServicesSupport)
- (void)_setDirty:(_Bool)arg1 identifier:(id)arg2;
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (CDUnknownBlockType)_payloadUpdateBlockForIdentifier:(id)arg1;
- (id)_objectForIdentifier:(id)arg1;
- (id)_payloadForIdentifier:(id)arg1;
@end
