//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NPSDomainAccessor, NSString;

@interface StocksWatchPreferences : NSObject
{
    _Bool _changeColorSwapped;
    unsigned long long _textDirection;
    NPSDomainAccessor *_watchDefaults;
}

+ (id)sharedPreferences;
+ (void)initialize;
- (void).cxx_destruct;
- (void)syncRowDataType;
- (void)syncChartInterval;
- (void)syncStocksList;
- (void)syncSelectedStock;
- (void)syncKey:(id)arg1;
- (void)reactivateWatchNPSAccessor;
@property(nonatomic) long long complicationDisplayMode;
@property(nonatomic) __weak NSString *defaultStockSymbol;
- (void)dealloc;
- (id)init;

@end

