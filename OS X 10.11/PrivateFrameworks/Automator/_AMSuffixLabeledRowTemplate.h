//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSFormatter, NSString, NSTextField;

@interface _AMSuffixLabeledRowTemplate : NSPredicateEditorRowTemplate
{
    NSTextField *_labelField;
    NSString *_label;
    NSFormatter *_formatter;
    long long _multiplier;
    BOOL _hasCreatedViews;
}

@property long long multiplier; // @synthesize multiplier=_multiplier;
@property(copy) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)arg1;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
