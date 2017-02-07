//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSString;

@interface MRPairedDevice : NSObject <NSSecureCoding>
{
    BOOL _connected;
    NSString *_name;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

@end
