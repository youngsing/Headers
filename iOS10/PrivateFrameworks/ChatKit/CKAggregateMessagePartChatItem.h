//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTextMessagePartChatItem.h>

@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem
{
    NSArray *_subparts;
}

@property(copy, nonatomic) NSArray *subparts; // @synthesize subparts=_subparts;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title;
- (id)pasteboardItems;
- (Class)balloonViewClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)composition;

@end
