//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CAMLWriterDelegate;

@interface CAMLWriter : NSObject
{
    struct _CAMLWriterPriv *_priv;
}

+ (id)writerWithData:(id)arg1;
- (void)dealloc;
- (void)_writeElementTree:(struct _CAMLWriterElement *)arg1;
- (void)endElement;
- (id)URLStringForResource:(id)arg1;
- (void)setElementContent:(id)arg1;
- (void)setElementAttribute:(id)arg1 forKey:(id)arg2;
- (void)beginPropertyElement:(id)arg1;
- (void)beginElement:(unsigned int)arg1;
- (void)encodeObject:(id)arg1 conditionally:(_Bool)arg2;
- (void)encodeObject:(id)arg1;
@property __weak id <CAMLWriterDelegate> delegate;
@property(retain) NSURL *baseURL;
- (id)initWithData:(id)arg1;

@end

