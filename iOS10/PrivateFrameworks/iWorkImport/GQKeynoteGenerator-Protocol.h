//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class GQDBGAbstractSlide, GQDBGPresentation, GQDBGSlide, GQDSStylesheet, GQSDocument;

@protocol GQKeynoteGenerator <NSObject>
+ (Class)enterSlideDrawables:(GQDBGAbstractSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)endSlide:(GQDBGSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)beginSlide:(GQDBGSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)handleThemeStylesheet:(GQDSStylesheet *)arg1 state:(GQSDocument *)arg2;
+ (int)handleSlideSize:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
+ (int)endPresentation:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
+ (int)beginPresentation:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
@end

