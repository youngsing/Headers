//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _NSBrowserDropDestContext : NSObject
{
    long long targetColumn;
    long long targetRow;
    unsigned long long targetDropOperation;
    unsigned long long dragOperation;
    long long lastTargetRow;
    long long lastTargetColumn;
    unsigned long long lastDragOperationMask;
    unsigned long long lastDropOperation;
    BOOL lastOpInTopHalf;
}

- (id)init;

@end

