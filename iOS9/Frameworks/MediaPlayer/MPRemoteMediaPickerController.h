//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class MPMediaPickerController;

@interface MPRemoteMediaPickerController : _UIRemoteViewController
{
    MPMediaPickerController *_mediaPickerController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak MPMediaPickerController *mediaPickerController; // @synthesize mediaPickerController=_mediaPickerController;
- (void).cxx_destruct;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

