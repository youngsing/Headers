//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface CNContactIconAppearance : NSObject
{
    NSColor *_foregroundColor;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
}

+ (id)appearanceWithBackgroundStyle:(long long)arg1 selected:(BOOL)arg2;
@property(retain) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void).cxx_destruct;

@end

