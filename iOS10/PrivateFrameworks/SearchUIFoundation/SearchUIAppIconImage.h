//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUIFoundation/SearchUISFImage.h>

#import <SearchUIFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SearchUIAppIconImage : SearchUISFImage <NSSecureCoding>
{
    unsigned long long _variant;
    NSString *_bundleID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 variant:(unsigned long long)arg2;
- (void)setSize;

@end

