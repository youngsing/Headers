//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTransitDeparturesViewController.h>

@class NSString;

@interface MKPlaceTransitViewController : MKTransitDeparturesViewController
{
    NSString *_errorString;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)_labelForError;
- (id)_errorCell;
- (id)_errorString;
- (BOOL)_shouldDisplayError;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2;

@end

