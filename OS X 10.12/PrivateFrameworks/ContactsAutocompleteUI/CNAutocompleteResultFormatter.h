//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteResultFormatter : NSFormatter
{
    BOOL _includeAddress;
    BOOL _suppressNonEmailValues;
    id <CNAutocompleteResultWindowDelegate> _delegate;
}

+ (id)displayStringForResult:(id)arg1 withDelegate:(id)arg2;
@property(nonatomic) BOOL suppressNonEmailValues; // @synthesize suppressNonEmailValues=_suppressNonEmailValues;
@property(nonatomic) BOOL includeAddress; // @synthesize includeAddress=_includeAddress;
@property(retain, nonatomic) id <CNAutocompleteResultWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)displayStringForResult:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

