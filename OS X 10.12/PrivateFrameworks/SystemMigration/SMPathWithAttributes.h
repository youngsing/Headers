//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SMPathWithAttributes : NSObject
{
    NSString *_pathname;
    NSDictionary *_attributes;
}

+ (id)sortedPaths:(id)arg1 withAttributes:(id)arg2;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *pathname; // @synthesize pathname=_pathname;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPathname:(id)arg1 andAttributes:(id)arg2;

@end
