//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCardViewLabelGenerator;

__attribute__((visibility("hidden")))
@interface ABCNContactLabelGenerator : NSObject
{
    ABCardViewLabelGenerator *_labelGenerator;
}

- (id)converterForContact:(id)arg1 personMapper:(id)arg2 property:(id)arg3;
- (id)nextLabelForProperty:(id)arg1 contact:(id)arg2 addressBook:(id)arg3;
- (void)dealloc;
- (id)init;

@end
