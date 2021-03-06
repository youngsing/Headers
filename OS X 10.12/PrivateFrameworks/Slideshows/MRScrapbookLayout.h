//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MRScrapbookLayout : NSObject
{
    struct CGRect rect;
    NSString *frame;
    NSString *mask;
    double zRotation;
    NSArray *subtract;
    double startTime;
    long long slideIndex;
    double aspectRatio;
    BOOL stretch;
    BOOL isText;
    BOOL isBreak;
    NSString *backgroundPaper;
    BOOL twoPart;
    BOOL move;
    struct CGRect paperRect;
    long long drawCardIndex;
    BOOL skip;
    long long moveIndex;
}

@property(retain, nonatomic) NSString *backgroundPaper; // @synthesize backgroundPaper;
@property(retain, nonatomic) NSArray *subtract; // @synthesize subtract;
@property(retain, nonatomic) NSString *frame; // @synthesize frame;
@property(retain, nonatomic) NSString *mask; // @synthesize mask;
- (void)dealloc;

@end

