//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAEmailAddressParser : NSObject
{
}

+ (id)displayNameFromAddress:(id)arg1;
+ (void)_componentsForFullAddress:(id)arg1 rawAddress:(id *)arg2 localPart:(id *)arg3 domain:(id *)arg4;
+ (id)addressDomainFromAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (BOOL)addressIsEmptyGroup:(id)arg1;
+ (BOOL)isLegalEmailAddress:(id)arg1;
+ (id)unsafeAddressLocalPartCharacterSet;

@end

