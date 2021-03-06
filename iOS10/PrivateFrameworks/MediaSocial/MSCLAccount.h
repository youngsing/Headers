//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class MSCLFacebookPage, NSArray, NSMutableDictionary, NSString;

@interface MSCLAccount : NSObject <NSCopying>
{
    NSMutableDictionary *_accountProperties;
}

- (void).cxx_destruct;
- (id)_keychainPassword;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *userName;
@property(copy, nonatomic) NSString *preferredPageIdentifier;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSArray *pages;
@property(copy, nonatomic) NSString *fullName;
@property(copy, nonatomic) NSString *authenticationToken;
@property(copy, nonatomic) NSString *authenticationSecret;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
@property(readonly, copy, nonatomic) MSCLFacebookPage *preferredPage;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)updateWithMSCLAccount:(id)arg1;
- (_Bool)saveToKeychain;
- (_Bool)removeFromKeychain;
- (id)initWithServiceIdentifier:(id)arg1;

@end

