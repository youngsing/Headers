//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class ABCardViewLinkedPerson;

__attribute__((visibility("hidden")))
@interface ABCardViewLinkedPersonValueTransformer : NSValueTransformer
{
    ABCardViewLinkedPerson *_lastLinkedPerson;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
@property(retain, nonatomic) ABCardViewLinkedPerson *lastLinkedPerson; // @synthesize lastLinkedPerson=_lastLinkedPerson;
- (id)transformedValue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

