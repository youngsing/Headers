//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSURL, RUIElement, RUITableViewSection;

@protocol RUITableViewSectionDelegate
- (NSURL *)sourceURLForRUITableViewSection;
- (void)section:(RUITableViewSection *)arg1 activatedElement:(RUIElement *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

