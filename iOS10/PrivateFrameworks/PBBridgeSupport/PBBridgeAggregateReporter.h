//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBBridgeAggregateReporter : NSObject
{
}

+ (void)pushCommunicationTimingType:(unsigned long long)arg1 withValue:(double)arg2;
+ (id)descriptionForCommTimingType:(unsigned long long)arg1;
+ (void)pushTimingForTypeNamed:(id)arg1 withValue:(double)arg2;
+ (void)pushTimingType:(unsigned long long)arg1 withValue:(double)arg2;
+ (id)descriptionForTimingType:(unsigned long long)arg1;
+ (void)incrementSuccessType:(unsigned long long)arg1;
+ (void)activationServerRespondedAtPage:(unsigned long long)arg1;
+ (id)descriptionForSuccessType:(unsigned long long)arg1;

@end

