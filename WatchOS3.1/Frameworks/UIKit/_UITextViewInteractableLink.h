//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITextViewInteractableItem.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _UITextViewInteractableLink : _UITextViewInteractableItem
{
    NSURL *_link;
}

+ (id)interactableLinkWithURL:(id)arg1 range:(struct _NSRange)arg2 subRange:(struct _NSRange)arg3;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (void)_linkInteractionShareLink;
- (void)_linkInteractionCopyLink;
- (void)_linkInteractionOpenURL;
- (_Bool)_linkInteractionPerformDefaultAction;
- (id)linkActions;
- (id)defaultAction;
- (id)actions;
- (_Bool)allowInteraction:(long long)arg1;
- (id)localizedTitle;

@end
