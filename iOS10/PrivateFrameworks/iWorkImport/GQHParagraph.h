//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHParagraph : NSObject
{
}

+ (int)handleInlineList:(id)arg1 state:(id)arg2;
+ (int)handleParagraph:(id)arg1 state:(id)arg2 bulletStates:(struct __CFDictionary *)arg3 isMultiColumn:(_Bool)arg4;
+ (int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4 isMultiColumn:(_Bool)arg5;
+ (_Bool)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float *)arg2;
+ (id)getBulletStyle:(id)arg1 level:(int)arg2;
+ (void)mapBullet:(struct __CFDictionary *)arg1 state:(id)arg2;
+ (struct __CFDictionary *)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(struct __CFDictionary *)arg5 showBullet:(_Bool)arg6;
+ (_Bool)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4;
+ (int)handleBookmark:(id)arg1 state:(id)arg2;
+ (int)handleLink:(id)arg1 state:(id)arg2;

@end
