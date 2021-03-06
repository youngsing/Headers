//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedLine : NSObject
{
    NSString *_name;
    id _value;
    NSArray *_parameters;
    NSString *_grouping;
    BOOL _isPrimary;
}

@property(copy) NSString *grouping; // @synthesize grouping=_grouping;
@property BOOL isPrimary; // @synthesize isPrimary=_isPrimary;
@property(copy) NSArray *parameters; // @synthesize parameters=_parameters;
@property(retain) id value; // @synthesize value=_value;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;

@end

