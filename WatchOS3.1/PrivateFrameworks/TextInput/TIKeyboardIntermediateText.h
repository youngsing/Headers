//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding>
{
    unsigned long long _selectionOffset;
    NSString *_inputString;
    NSString *_displayString;
    NSString *_searchString;
}

+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
- (id)description;
@property(readonly, nonatomic) struct _NSRange selectedRange;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;

@end

