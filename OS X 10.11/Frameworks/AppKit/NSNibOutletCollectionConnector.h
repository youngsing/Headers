//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSNibConnector.h>

@class NSString;

@interface NSNibOutletCollectionConnector : NSNibConnector
{
    NSString *_runtimeCollectionClassName;
    BOOL _addsContentToExistingCollection;
}

@property BOOL addsContentToExistingCollection; // @synthesize addsContentToExistingCollection=_addsContentToExistingCollection;
@property(copy) NSString *runtimeCollectionClassName; // @synthesize runtimeCollectionClassName=_runtimeCollectionClassName;
- (void)establishConnection;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

