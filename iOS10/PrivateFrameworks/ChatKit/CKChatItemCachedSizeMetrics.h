//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/NSSecureCoding-Protocol.h>

@class IMDoubleLinkedListNode, NSDate, NSString;

@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding>
{
    NSString *_key;
    NSDate *_lastAccess;
    IMDoubleLinkedListNode *_node;
    struct CGSize _size;
    struct UIEdgeInsets _textAlignmentInsets;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) IMDoubleLinkedListNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSDate *lastAccess; // @synthesize lastAccess=_lastAccess;
@property(nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

