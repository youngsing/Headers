//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class MKUILabel, NSProgressIndicator;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell
{
    MKUILabel *_loadingLabel;
    NSProgressIndicator *_loadingIndicator;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

