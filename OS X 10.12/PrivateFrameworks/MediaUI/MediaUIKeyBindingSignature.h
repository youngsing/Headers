//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaUI/NSCopying-Protocol.h>

@class NSString;

@interface MediaUIKeyBindingSignature : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long modifierFlags;
@property(readonly) NSString *charactersIgnoringModifiers;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharactersIgnoringModifiers:(id)arg1 modifierFlags:(unsigned long long)arg2;

@end

