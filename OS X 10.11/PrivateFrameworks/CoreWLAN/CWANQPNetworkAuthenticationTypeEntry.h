//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CWANQPNetworkAuthenticationTypeEntry : NSObject <NSSecureCoding, NSCopying>
{
    long long _typeIndicator;
    NSString *_localizedTypeIndicator;
    NSString *_redirectURL;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(copy, nonatomic) NSString *localizedTypeIndicator; // @synthesize localizedTypeIndicator=_localizedTypeIndicator;
@property(nonatomic) long long typeIndicator; // @synthesize typeIndicator=_typeIndicator;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTypeIndicator:(long long)arg1 redirectURL:(id)arg2;

@end

