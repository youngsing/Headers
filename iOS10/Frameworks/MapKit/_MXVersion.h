//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MXVersion : NSObject
{
    NSArray *_components;
}

@property(readonly, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithVersionString:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (id)init;

@end

