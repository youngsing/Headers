//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SKRequestDelegate;

@interface SKRequest : NSObject
{
    id _requestInternal;
}

- (void).cxx_destruct;
- (void)issueRequestForIdentifier:(id)arg1;
@property(nonatomic) __weak id <SKRequestDelegate> delegate;
- (void)start;
- (void)cancel;
- (id)init;

@end

