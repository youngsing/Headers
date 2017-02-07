//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/NSObject-Protocol.h>

@class MPUHTMLParser, NSDictionary, NSString;
@protocol MPUHTMLParserState;

@protocol MPUHTMLParserDelegate <NSObject>

@optional
- (NSString *)parser:(MPUHTMLParser *)arg1 prependStringForTagName:(NSString *)arg2;
- (NSDictionary *)parser:(MPUHTMLParser *)arg1 attributesForTagName:(NSString *)arg2 tagAttributes:(NSDictionary *)arg3 currentState:(id <MPUHTMLParserState>)arg4;
- (NSDictionary *)defaultAttributesForParser:(MPUHTMLParser *)arg1;
@end
