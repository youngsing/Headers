//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVSemanticContextServices/TVSCSemanticContext.h>

@class NSArray, TVSCSemanticObject;

@interface TVSCApplicationStateSemanticContext : TVSCSemanticContext
{
    TVSCSemanticObject *_mainEntity;
    NSArray *_commands;
}

@property(retain, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) TVSCSemanticObject *mainEntity; // @synthesize mainEntity=_mainEntity;
- (void).cxx_destruct;
- (id)linkedDataDictionary;

@end
