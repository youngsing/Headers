//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/TTAttachment-Protocol.h>

@class NSString;

@interface TTAttachment : NSObject <TTAttachment>
{
    NSString *_attachmentIdentifier;
    NSString *_attachmentUTI;
}

+ (BOOL)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;
@property(retain, nonatomic) NSString *attachmentUTI; // @synthesize attachmentUTI=_attachmentUTI;
@property(retain, nonatomic) NSString *attachmentIdentifier; // @synthesize attachmentIdentifier=_attachmentIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqualToModelComparable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
