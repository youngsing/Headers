//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PSContent : NSObject
{
    id _internal;
}

@property(readonly, retain) NSString *MIMEType;
@property(readonly, retain) NSData *data;
@property(readonly, retain) NSString *HTMLString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct ContentCore *)_contentCore;
@property(readonly) NSString *plainTextString;
- (void)_setPlainTextCache:(id)arg1;
- (BOOL)isTextual;
- (id)description;
- (void)dealloc;
- (id)initWithHTMLString:(id)arg1;
- (id)initWithPlainTextString:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)_initWithCore:(struct ContentCore *)arg1;

@end

