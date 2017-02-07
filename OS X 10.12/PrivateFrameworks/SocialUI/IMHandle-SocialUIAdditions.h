//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMHandle.h>

@class CNContact;

@interface IMHandle (SocialUIAdditions)
+ (void)composeEMailToPeople:(id)arg1;
+ (BOOL)usesAlternateStatusImages;
+ (id)imageForStatus:(unsigned long long)arg1;
+ (void)_loadShapedStatusImages;
+ (void)_loadStatusImages;
+ (void)_personChangedForMonogram:(id)arg1;
+ (void)_registerForPersonChanges;
+ (id)monogramWithDiameter:(double)arg1 style:(long long)arg2;
+ (id)largerGenericPicture;
+ (id)genericPicture;
- (id)fmfSiblingHandles;
- (id)fmfHandle;
- (id)menuItemsForAVOptions:(unsigned long long)arg1 target:(id)arg2 availableAVOptions:(unsigned long long *)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)menuForLegacyAVOptions:(unsigned long long)arg1 target:(id)arg2 availableAVOptions:(unsigned long long *)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)menuItemsWithTarget:(id)arg1;
- (id)ddMenuItems;
- (long long)_queryForMenuItems:(id)arg1 idsService:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)composeEMail;
- (void)askToShareRecipientScreen;
- (void)inviteToShareMyScreen;
- (void)_initiateScreenSharingShareMyScreen:(BOOL)arg1;
- (void)faceTimeCallWithVideo:(_Bool)arg1;
- (BOOL)showContactInRect:(struct CGRect)arg1 ofWindow:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (id)monogramWithDiameter:(double)arg1 style:(long long)arg2;
- (id)monogramWithDiameter:(double)arg1 style:(long long)arg2 blocking:(BOOL)arg3;
- (id)customImageDataBlocking:(BOOL)arg1;
- (BOOL)hasCustomPictureLoaded;
- (BOOL)hasCustomPicture;
- (void)reloadCachedMonograms;
- (void)setCachedMonograms:(id)arg1;
- (id)cachedMonograms;
@property(readonly) CNContact *avatarContact;
@end
