//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

@class LSAppLink;

__attribute__((visibility("hidden")))
@interface DDOpenURLAction : DDAction
{
    LSAppLink *_appLink;
    _Bool _appLinkInitDone;
}

- (_Bool)canBePerformedByOpeningURL;
- (void)performFromView:(id)arg1;
- (id)localizedName;
- (id)companionAction;
- (id)appLink;
- (void)dealloc;
- (_Bool)useAppLink;

@end
