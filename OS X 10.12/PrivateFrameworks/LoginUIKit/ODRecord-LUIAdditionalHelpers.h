//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpenDirectory/ODRecord.h>

@interface ODRecord (LUIAdditionalHelpers)
+ (id)recordForUser:(unsigned int)arg1;
+ (id)recordForCurrentUser;
- (id)userLikeness;
- (unsigned int)userID;
- (void)setUserPicture:(id)arg1;
- (void)setLikenessRecipe:(id)arg1;
- (id)userPicture;
- (id)name;
- (id)likenessRecipe;
- (id)likeness;
- (id)generatedUID;
- (id)fullName;
- (id)avatarRepresentation;
@end
