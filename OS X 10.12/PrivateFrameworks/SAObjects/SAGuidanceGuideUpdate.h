//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SAGuidanceGuideSnippet;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand
{
}

+ (id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)guideUpdate;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSNumber *guideTag;
@property(retain, nonatomic) SAGuidanceGuideSnippet *guideSnippet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
