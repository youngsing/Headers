//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFHTTPRequestInternal, NSData, NSDictionary, NSString, NSURL, NSURLRequest;

@interface HMFHTTPRequest : NSObject
{
    HMFHTTPRequestInternal *_internal;
    double _timeoutInterval;
}

+ (id)shortDescription;
@property(readonly, nonatomic) HMFHTTPRequestInternal *internal; // @synthesize internal=_internal;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURLRequest *urlRequest;
@property(readonly, nonatomic) NSData *body;
@property(readonly, nonatomic) NSDictionary *headerFields;
@property(readonly, copy, nonatomic) NSString *method;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)responseWithStatusCode:(long long)arg1;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithInternalRequest:(id)arg1;
- (id)init;

@end

