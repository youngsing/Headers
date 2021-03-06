//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDInsertionContext.h>

@interface TSDDragInsertionContext : TSDInsertionContext
{
    struct CGPoint mPreferredCenter;
    _Bool mPreferredCenterRequired;
    _Bool mShouldEndEditing;
    _Bool mFromDragToInsertController;
    _Bool mInsertWillBeDiscarded;
}

- (_Bool)insertWillBeDiscarded;
- (_Bool)fromDragToInsertController;
- (_Bool)shouldEndEditing;
- (struct CGPoint)preferredCenter;
- (_Bool)isPreferredCenterRequired;
- (_Bool)isInteractive;
- (_Bool)insertFromDrag;
- (_Bool)insertFloating;
- (_Bool)hasPreferredCenter;
- (id)init;
- (id)initWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertWillBeDiscarded:(_Bool)arg5;

@end

