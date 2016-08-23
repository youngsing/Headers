//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

@class NSString;

@interface NSPersistentUIEncodedReference : NSObject <NSCoding, NSCopying>
{
    NSString *persistentIdentifier;
    unsigned int windowID;
}

+ (id)encodedReferenceToResponderMap;
+ (void)setEncodedReferenceToResponderMap:(id)arg1;
@property unsigned int windowID; // @synthesize windowID;
@property(readonly) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForPersistentIdentifier:(id)arg1 windowID:(unsigned int)arg2;
- (void)dealloc;

@end

