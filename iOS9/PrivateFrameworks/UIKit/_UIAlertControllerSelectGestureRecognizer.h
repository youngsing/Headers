//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@class UIAlertAction, UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerSelectGestureRecognizer : UITapGestureRecognizer
{
    UIAlertController *_alertController;
    UIAlertAction *_actionOnPressesBegan;
}

@property(nonatomic) __weak UIAlertAction *actionOnPressesBegan; // @synthesize actionOnPressesBegan=_actionOnPressesBegan;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void).cxx_destruct;
- (void)reset;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;

@end
