//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessageKey.h>

@class NSString;

@interface SGInteractionKey : SGMessageKey
{
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *personHandle;
@property(readonly, nonatomic) NSString *bundleId;
- (id)init;
- (id)initWithBundleId:(id)arg1 personHandle:(id)arg2;
- (id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2;

@end

