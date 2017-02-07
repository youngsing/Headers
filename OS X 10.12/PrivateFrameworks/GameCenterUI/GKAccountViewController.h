//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKServerWebViewController.h>

@class NSString;

@interface GKAccountViewController : GKServerWebViewController
{
    NSString *_accountName;
    NSString *_alias;
    long long _mode;
    NSString *_firstName;
    NSString *_lastName;
    BOOL _shouldUploadContacts;
}

@property(nonatomic) BOOL shouldUploadContacts; // @synthesize shouldUploadContacts=_shouldUploadContacts;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (void)uploadContacts;
- (void)processGameKitURLComponents:(id)arg1;
- (void)finish;
- (void)viewWillAppear;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
