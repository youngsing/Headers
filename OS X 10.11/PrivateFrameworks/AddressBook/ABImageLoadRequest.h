//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ABImageLoadRequest : NSObject
{
    NSString *_contactIdentifier;
    NSArray *_emailAddresses;
    NSString *_primaryImagePath;
    NSArray *_alternateImageIDs;
    NSString *_alternateImagePath;
    BOOL _isMe;
    int _searchLocations;
}

+ (id)imagesFolderForContact:(id)arg1;
+ (id)requestWithCoreDataContact:(id)arg1;
+ (id)requestWithAddressBookPerson:(id)arg1;
+ (id)requestWithAddressKitPerson:(id)arg1 isMe:(BOOL)arg2 primaryImagePath:(id)arg3;
@property int searchLocations; // @synthesize searchLocations=_searchLocations;
@property(readonly) BOOL isMe; // @synthesize isMe=_isMe;
@property(copy) NSString *alternateImagePath; // @synthesize alternateImagePath=_alternateImagePath;
@property(copy) NSArray *alternateImageIDs; // @synthesize alternateImageIDs=_alternateImageIDs;
@property(readonly, copy) NSString *primaryImagePath; // @synthesize primaryImagePath=_primaryImagePath;
@property(copy) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, copy) NSString *imagesFolder;
- (void)logDebugInfoWithName:(id)arg1;
- (void)dealloc;
- (id)initWithContactIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 isMe:(BOOL)arg4 primaryImagePath:(id)arg5;

@end

