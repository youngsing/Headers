//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface _WKRemoteObjectInterface : NSObject
{
    struct HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow, 16>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow, 16>>> _allowedArgumentClasses;
    struct RetainPtr<NSString> _identifier;
    Protocol *_protocol;
}

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const Vector_66be88e3 *)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2;
- (id)description;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;

@end

