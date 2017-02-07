//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimeZone;
@protocol GEOServerFormattedString;

@interface MNTransitInstruction : NSObject
{
    long long _context;
    NSArray *_majorFormattedInstruction;
    NSArray *_minorFormattedInstruction;
    NSArray *_tertiaryFormattedInstruction;
    id <GEOServerFormattedString> _departureBarInstruction;
    id <GEOServerFormattedString> _countStopsFormattedString;
}

+ (id)instructionForUncertainArrivalToStationStep:(id)arg1 context:(long long)arg2;
@property(retain, nonatomic) id <GEOServerFormattedString> countStopsFormattedString; // @synthesize countStopsFormattedString=_countStopsFormattedString;
@property(retain, nonatomic) id <GEOServerFormattedString> departureBarInstruction; // @synthesize departureBarInstruction=_departureBarInstruction;
@property(copy) NSArray *tertiaryFormattedInstruction; // @synthesize tertiaryFormattedInstruction=_tertiaryFormattedInstruction;
@property(copy) NSArray *minorFormattedInstruction; // @synthesize minorFormattedInstruction=_minorFormattedInstruction;
@property(copy) NSArray *majorFormattedInstruction; // @synthesize majorFormattedInstruction=_majorFormattedInstruction;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)formattedInstructionForType:(long long)arg1;
- (void)refreshInstructionStrings;
- (id)instructionSetsForInstructionType:(long long)arg1;
- (struct NSDictionary *)overridenInstructionsMapping;
- (id)instructionSet;
@property(readonly, nonatomic) NSTimeZone *timeZoneForFormattedString;
- (void)_fillInInstructions;
- (id)initWithContext:(long long)arg1;

@end
