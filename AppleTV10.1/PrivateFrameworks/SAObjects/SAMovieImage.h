//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL, SAMovieResolution;

@interface SAMovieImage : AceObject <SAAceSerializable>
{
}

+ (id)imageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)image;
@property(copy, nonatomic) NSURL *uri;
@property(retain, nonatomic) SAMovieResolution *resolution;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

