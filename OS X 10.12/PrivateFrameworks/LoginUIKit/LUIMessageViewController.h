//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoginUIKit/LUIViewController.h>

@class LUIGoodSamaritanMessageView, NSString;

@interface LUIMessageViewController : LUIViewController
{
    LUIGoodSamaritanMessageView *_messageView;
    NSString *_currentMessage;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)refresh;
- (void)_layoutContentView;
- (void)_setupContentView;

@end
