//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;

@protocol AuxiliaryCallsService
- (void)windowForContextID:(unsigned int)arg1 reply:(void (^)(unsigned int, NSError *))arg2;
- (void)handlePotentialCommandEquivalent:(NSData *)arg1 eventOwner:(unsigned int)arg2 reply:(void (^)(BOOL))arg3;
@end
