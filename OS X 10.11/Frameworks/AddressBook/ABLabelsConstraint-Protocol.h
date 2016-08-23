//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ABLabelsConstraint <NSObject>
- (BOOL)customLabelsSupported;
- (NSArray *)initialLabelsForProperty:(NSString *)arg1;
- (NSArray *)availableLabelsForProperty:(NSString *)arg1 activeLabels:(NSArray *)arg2;
- (BOOL)isLabelSupported:(NSString *)arg1 forProperty:(NSString *)arg2;
- (BOOL)isPropertySupported:(NSString *)arg1;
@end

