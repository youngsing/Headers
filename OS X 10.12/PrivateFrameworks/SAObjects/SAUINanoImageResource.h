//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUIImageResource.h>

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource
{
}

+ (id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nanoImageResource;
@property(copy, nonatomic) NSString *placeholderImage;
@property(retain, nonatomic) SAUIDecoratedText *monogram;
@property(copy, nonatomic) NSString *imageDownloadType;
@property(nonatomic) BOOL backgroundNeeded;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
