//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinRemoveUpdate : BBBulletinUpdate
{
    _Bool _shouldSync;
}

+ (_Bool)supportsSecureCoding;
+ (id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;
@property(readonly, nonatomic) _Bool shouldSync; // @synthesize shouldSync=_shouldSync;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;

@end

