//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SearchUIUtilities : NSObject
{
}

+ (void)performOpenTask:(CDUnknownBlockType)arg1;
+ (id)openOptions;
+ (void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2;
+ (void)openPunchout:(id)arg1;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (struct CGRect)absoluteFrameForView:(id)arg1;
+ (_Bool)isPortrait;
+ (_Bool)deviceSupportsRotation;
+ (_Bool)isWideScreen;
+ (id)addAspectRatioConstraintForImageView:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornersToRound:(unsigned long long)arg3 cornerRadius:(double)arg4;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)captionFont;
+ (id)shortFootnoteFont;
+ (id)shortSubheadFont;
+ (id)hyphenatableStringForString:(id)arg1;
+ (double)standardTableCellContentInset;
+ (double)onePixelForCurrentScreenResolution;
+ (double)separatorHeight;
+ (id)vibrantButtonColorForStyle:(unsigned long long)arg1;
+ (id)buttonColorForStyle:(unsigned long long)arg1;
+ (id)textColorForStyle:(unsigned long long)arg1;
+ (struct CGSize)maxThumbnailSize;
+ (void)initialize;

@end

