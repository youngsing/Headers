//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSTabDialogInformation : NSObject
{
    _Bool _presented;
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _dismissalBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
- (void).cxx_destruct;
- (void)presentIfNeeded;
- (id)initWithPresentationBlock:(CDUnknownBlockType)arg1 dismissalBlock:(CDUnknownBlockType)arg2;

@end

