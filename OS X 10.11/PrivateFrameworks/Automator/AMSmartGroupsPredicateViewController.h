//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSPredicate, NSPredicateEditor;

@interface AMSmartGroupsPredicateViewController : NSViewController
{
    NSPredicate *_criteria;
    NSPredicateEditor *_editor;
}

@property(retain) NSPredicate *criteria; // @synthesize criteria=_criteria;
- (void)dealloc;
- (void)awakeFromNib;

@end

