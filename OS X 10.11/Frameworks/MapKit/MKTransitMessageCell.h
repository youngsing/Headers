//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

#import <MapKit/MKMultiLineLabelContainer-Protocol.h>

@class MKUILabel, NSString;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell <MKMultiLineLabelContainer>
{
    MKUILabel *_messageLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *messageText;
- (id)multilineTextFieldsWithinContainer;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
