//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol NTKCompanionAppDelegate;

@interface NTKCompanionApp : NSObject
{
    _Bool _fetchingIcon;
    NSString *_name;
    NSString *_watchApplicationIdentifier;
    NSString *_containerApplicationIdentifier;
    id <NTKCompanionAppDelegate> _delegate;
    UIImage *_icon;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool fetchingIcon; // @synthesize fetchingIcon=_fetchingIcon;
@property(nonatomic) __weak id <NTKCompanionAppDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *containerApplicationIdentifier; // @synthesize containerApplicationIdentifier=_containerApplicationIdentifier;
@property(retain, nonatomic) NSString *watchApplicationIdentifier; // @synthesize watchApplicationIdentifier=_watchApplicationIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)complication;

@end

