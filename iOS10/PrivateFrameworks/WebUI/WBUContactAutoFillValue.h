//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBUContactAutoFillValue : NSObject
{
    _Bool _selected;
    NSString *_label;
    NSString *_displayValue;
    NSArray *_matches;
}

@property(readonly, copy, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(readonly, copy, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)initWithMatches:(id)arg1 displayValue:(id)arg2 label:(id)arg3;

@end

