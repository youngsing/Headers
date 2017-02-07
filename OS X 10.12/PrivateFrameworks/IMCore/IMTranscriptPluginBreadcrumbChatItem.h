//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMPluginChatItemProtocol-Protocol.h>

@class IMBalloonPluginDataSource, NSString;

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem <IMPluginChatItemProtocol>
{
    IMBalloonPluginDataSource *_dataSource;
    NSString *_rawStatusText;
    NSString *_statusText;
    unsigned long long _optionFlags;
}

@property(readonly, nonatomic) unsigned long long optionFlags; // @synthesize optionFlags=_optionFlags;
@property(readonly, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, nonatomic) NSString *rawStatusText; // @synthesize rawStatusText=_rawStatusText;
@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, retain, nonatomic) NSString *type;
- (void)configureStatusTextWithAccount:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithItem:(id)arg1 datasource:(id)arg2 statusText:(id)arg3 optionFlags:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
