//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPTextViewStyle;

__attribute__((visibility("hidden")))
@interface LPTextRowStyle : NSObject
{
    LPTextViewStyle *_leading;
    LPTextViewStyle *_trailing;
}

@property(readonly, nonatomic) LPTextViewStyle *trailing; // @synthesize trailing=_trailing;
@property(readonly, nonatomic) LPTextViewStyle *leading; // @synthesize leading=_leading;
- (void).cxx_destruct;
- (id)init;

@end

