//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/ISBookLibraryObserver-Protocol.h>

@interface CKBookLibraryClient : NSObject <ISBookLibraryObserver>
{
    long long _libraryType;
    CDUnknownBlockType _observerBlock;
}

@property(copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property long long libraryType; // @synthesize libraryType=_libraryType;
- (void).cxx_destruct;
- (void)bookLibraryHasAdded:(id)arg1 changed:(id)arg2 removed:(id)arg3;

@end
