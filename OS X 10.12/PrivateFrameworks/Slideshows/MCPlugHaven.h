//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/MCPlug.h>

@class MCAction, MCContainerNavigator, NSString;

@interface MCPlugHaven : MCPlug
{
    NSString *mIDInSupercontainer;
    MCContainerNavigator *mSupercontainer;
}

@property MCContainerNavigator *supercontainer; // @synthesize supercontainer=mSupercontainer;
@property(copy, getter=idInSupercontainer, setter=setIDInSupercontainer:) NSString *idInSupercontainer; // @synthesize idInSupercontainer=mIDInSupercontainer;
- (void)_copySelfToSnapshot:(id)arg1;
@property(retain, nonatomic) MCAction *actionOnCompletion;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;

@end

