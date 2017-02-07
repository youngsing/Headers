//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCacheFlushing-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCArticleListRecordSource, FCArticleRecordSource, FCCKDatabase, FCChannelMembershipController, FCFeedDatabase, FCForYouConfigRecordSource, FCPurchaseLookupRecordSource, FCResourceRecordSource, FCTagRecordSource, FCWebArchiveSource;

@protocol FCContentContextInternal <NSObject, FCCacheFlushing>
@property(readonly, nonatomic) FCCKDatabase *contentDatabase;
@property(readonly, nonatomic) FCFeedDatabase *feedDatabase;
@property(readonly, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property(readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property(readonly, nonatomic) FCArticleListRecordSource *articleListRecordSource;
@property(readonly, nonatomic) FCWebArchiveSource *webArchiveSource;
@property(readonly, nonatomic) FCResourceRecordSource *resourceRecordSource;
@property(readonly, nonatomic) FCChannelMembershipController *channelMembershipController;
@property(readonly, nonatomic) FCTagRecordSource *tagRecordSource;
@property(readonly, nonatomic) FCArticleRecordSource *articleRecordSource;
@end
