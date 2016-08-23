//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ABFindsPreferredLinkedPerson : NSObject
{
    ABAddressBook *_addressBook;
    NSString *_linkId;
    NSArray *_sortDescriptors;
}

+ (id)preferredPhotoFinderWithAddressBook:(id)arg1 linkId:(id)arg2;
+ (id)preferredNameFinderWithAddressBook:(id)arg1 linkId:(id)arg2;
- (id)sortPeople:(id)arg1;
- (id)getLinkedPeople;
- (id)findPerson;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 linkId:(id)arg2 tieBreakers:(id)arg3;

@end

