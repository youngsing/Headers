//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSString;

@interface NSNibExternalObjectPlaceholder : NSObject <NSCoding>
{
    NSString *_externalObjectPlaceholderIdentifier;
}

+ (void)removeMappingsForCoder:(id)arg1;
+ (id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2;
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;
+ (void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3;
+ (struct __CFDictionary *)placeholderDecodingMap;
@property(copy, nonatomic) NSString *externalObjectPlaceholderIdentifier; // @synthesize externalObjectPlaceholderIdentifier=_externalObjectPlaceholderIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
