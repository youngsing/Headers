//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontCollection : OADBaseFontCollection
{
    NSMutableDictionary *_scriptToFontMap;
}

- (id)description;
- (BOOL)isEmpty;
- (BOOL)isEqualToFontCollection:(id)arg1;
- (id)scripts;
- (void)setFont:(id)arg1 forScript:(id)arg2;
- (id)fontForScript:(id)arg1;
- (void)dealloc;
- (id)init;

@end
