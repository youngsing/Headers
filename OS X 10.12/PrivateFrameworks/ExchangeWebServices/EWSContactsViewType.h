//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePagingType.h>

@class NSString;

@interface EWSContactsViewType : EWSBasePagingType
{
    NSString *_InitialName;
    NSString *_FinalName;
}

+ (id)definition;
@property(copy, nonatomic) NSString *FinalName; // @synthesize FinalName=_FinalName;
@property(copy, nonatomic) NSString *InitialName; // @synthesize InitialName=_InitialName;
- (void).cxx_destruct;

@end

