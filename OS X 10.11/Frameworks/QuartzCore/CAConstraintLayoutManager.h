//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCoding-Protocol.h>

@interface CAConstraintLayoutManager : NSObject <NSCoding>
{
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)layoutManager;
- (void)invalidateLayoutOfLayer:(id)arg1;
- (struct CGSize)preferredSizeOfLayer:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

