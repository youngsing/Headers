//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSDisplayLayoutElement.h>

#import <SpringBoardServices/SBSDisplayLayoutElement-Protocol.h>

@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>
{
}

- (id)succinctDescriptionBuilder;
@property(nonatomic) long long layoutRole;
@property(readonly, nonatomic, getter=isSpringBoardElement) _Bool springBoardElement;
- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
