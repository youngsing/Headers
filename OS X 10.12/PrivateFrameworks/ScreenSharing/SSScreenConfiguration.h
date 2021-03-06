//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenSharing/NSCopying-Protocol.h>

@class NSArray, SSScreenInfo;

@interface SSScreenConfiguration : NSObject <NSCopying>
{
    struct SSRect mScaledSelectedScreenRect;
    SSScreenInfo *mGlobalScreen;
    NSArray *mScreens;
    BOOL mGlobalIsMixedMode;
    BOOL mIsDisplayInfo2;
    BOOL mIsVNC;
    void *mReservedForInstanceVariables;
}

@property BOOL isVNC; // @synthesize isVNC=mIsVNC;
@property BOOL isDisplayInfo2; // @synthesize isDisplayInfo2=mIsDisplayInfo2;
@property BOOL globalIsMixedMode; // @synthesize globalIsMixedMode=mGlobalIsMixedMode;
@property(copy) NSArray *screens; // @synthesize screens=mScreens;
@property(retain) SSScreenInfo *globalScreen; // @synthesize globalScreen=mGlobalScreen;
@property struct SSRect scaledSelectedScreenRect; // @synthesize scaledSelectedScreenRect=mScaledSelectedScreenRect;
- (id)description;
- (id)screenConfiguration;
- (id)screenWithID:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

