//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/_AMSystemEventsDiskItem.h>

@class NSString;

@interface _AMSystemEventsAlias : _AMSystemEventsDiskItem
{
}

- (void)printPrintDialog:(BOOL)arg1 withProperties:(id)arg2;
- (id)open;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *typeIdentifier;
@property BOOL stationery;
@property(readonly, copy) NSString *shortVersion;
@property(readonly, copy) NSString *productVersion;
@property(readonly, copy) NSString *kind;
@property(copy) NSString *fileType;
@property(copy) NSString *creatorType;
- (id)items;
- (id)folders;
- (id)filePackages;
- (id)files;
- (id)diskItems;
- (id)aliases;

@end

