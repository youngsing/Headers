//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrintingPrivate/NSObject-Protocol.h>

@class PKPrinter;

@protocol PKBrowserClientProtocol <NSObject>
- (void)printerUpdated:(PKPrinter *)arg1 more:(BOOL)arg2;
- (void)printerRemoved:(PKPrinter *)arg1 more:(BOOL)arg2;
- (void)printerAdded:(PKPrinter *)arg1 more:(BOOL)arg2;
@end
