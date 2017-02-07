//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKFetchesSyncServiceServer, NNMKProtoContentRequest, NNMKProtoFetchRequest, NNMKProtoFullSyncRequest, NNMKProtoHaltSyncRequest, NNMKProtoInitialSyncFinishedNotification, NNMKProtoMoreMessagesForConversationRequest, NNMKProtoMoreMessagesRequest, NSString;

@protocol NNMKFetchesSyncServiceServerDelegate <NSObject>
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didNotifyInitialSyncFinished:(NNMKProtoInitialSyncFinishedNotification *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestHaltSync:(NNMKProtoHaltSyncRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestFullSync:(NNMKProtoFullSyncRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestContent:(NNMKProtoContentRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestMoreMessagesForConversation:(NNMKProtoMoreMessagesForConversationRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestMoreMessages:(NNMKProtoMoreMessagesRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestFetch:(NNMKProtoFetchRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end
