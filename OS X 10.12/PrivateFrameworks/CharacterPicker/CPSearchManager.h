//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface CPSearchManager : NSObject
{
    NSString *_lastSearchString;
    NSCharacterSet *_whiteSpaceSet;
    unsigned long long _transactionID;
}

+ (id)sharedSearchManager;
- (void)setLastSearchedString:(id)arg1;
- (id)infoForCharcater:(id)arg1 infoTag:(id)arg2;
- (id)_searchEmojiStringByCoreEmoji:(id)arg1 uniqueDictionary:(id)arg2;
- (void)searchForCharactersWithSearchString:(id)arg1 maxCount:(long long)arg2 emojiIMMode:(BOOL)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end
