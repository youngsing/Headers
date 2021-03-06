//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, OADBaseStyles, OADDrawableDefaults;

__attribute__((visibility("hidden")))
@interface OADTheme : NSObject
{
    NSString *mName;
    OADBaseStyles *mBaseStyles;
    OADDrawableDefaults *mDrawableDefaults;
}

@property(readonly, nonatomic) OADDrawableDefaults *drawableDefaults; // @synthesize drawableDefaults=mDrawableDefaults;
@property(retain, nonatomic) OADBaseStyles *baseStyles; // @synthesize baseStyles=mBaseStyles;
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
- (id)description;
- (void)validateTheme;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end

