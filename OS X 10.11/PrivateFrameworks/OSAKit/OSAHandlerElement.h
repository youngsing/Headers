//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OSAKit/OSAScriptElement.h>

@class NSString;

@interface OSAHandlerElement : OSAScriptElement
{
    NSString *_parameters;
}

+ (id)elementWithName:(id)arg1 parameters:(id)arg2;
+ (id)elementWithName:(id)arg1;
- (BOOL)generateIntoText:(id)arg1 indent:(unsigned int)arg2;
- (id)title;
- (void)setParameters:(id)arg1;
- (id)parameters;
- (void)dealloc;
- (id)initWithName:(id)arg1 parameters:(id)arg2;
- (id)initWithName:(id)arg1;

@end

