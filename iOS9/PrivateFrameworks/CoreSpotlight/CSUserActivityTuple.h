//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSIndexQueuableItem-Protocol.h>

@class CSSearchableItem, CSUserAction, NSString;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem>
{
    CSUserAction *_action;
    CSSearchableItem *_item;
    NSString *_protectionClass;
}

@property(readonly) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(retain) CSSearchableItem *item; // @synthesize item=_item;
@property(retain) CSUserAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)searchableItem;
- (id)initWithAction:(id)arg1 item:(id)arg2 protectionClass:(id)arg3;

@end

