//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@interface CXSetMutedCallAction : CXCallAction
{
    BOOL _muted;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 muted:(BOOL)arg2;

@end
