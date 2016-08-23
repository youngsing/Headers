//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPerson, CBIdentity, NSImage, NSString;

@interface ListObject : NSObject
{
    NSImage *_icon;
    NSString *_displayName;
    NSString *_realName;
    CBIdentity *_identity;
    ABPerson *_person;
}

+ (id)listObjectWithPerson:(id)arg1;
+ (id)listObjectWithDisplayName:(id)arg1 realName:(id)arg2 icon:(id)arg3;
+ (id)listObjectWithIdentity:(id)arg1;
- (id)person;
- (id)cbIdentity;
- (id)realName;
- (id)displayName;
- (id)icon;
- (void)dealloc;
- (id)initWithPerson:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)initWithDisplayName:(id)arg1 realName:(id)arg2 icon:(id)arg3;

@end

