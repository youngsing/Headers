//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSNumber, NSTableCellView, NSTextField;

@interface IOBluetoothUI_BatteryControl : NSView
{
    int batteryState;
    BOOL scalesWhenResized;
    float floatValue;
    float redLevelThreshold;
    float receivedValue;
    NSImage *batteryImage;
    NSImage *levelImage0;
    NSImage *levelImage1;
    NSImage *levelImage2;
    BOOL isUsingRedLevel;
    BOOL mSelected;
    BOOL mDrawNow;
    NSNumber *floatVal;
    NSTextField *mDeviceName;
    NSTableCellView *mBT_Row;
}

+ (id)_batteryLevelImage:(unsigned char)arg1 useRedVersion:(BOOL)arg2;
+ (id)_batteryImageForState:(int)arg1;
+ (id)_batteryImageWithName:(id)arg1;
@property NSTableCellView *BT_row; // @synthesize BT_row=mBT_Row;
@property NSTextField *BT_deviceName; // @synthesize BT_deviceName=mDeviceName;
@property(nonatomic) float redLevelThreshold; // @synthesize redLevelThreshold;
@property(nonatomic) float floatValue; // @synthesize floatValue;
@property(nonatomic) int batteryState; // @synthesize batteryState;
@property(nonatomic) BOOL scalesWhenResized; // @synthesize scalesWhenResized;
- (float)batteryPercentForIcon;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBatteryLevelWithRect:(struct CGRect)arg1 batteryImageRect:(struct CGRect)arg2;
- (void)_drawBatteryImage:(id)arg1 withRect:(struct CGRect)arg2 inRect:(struct CGRect *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setupLevelImages;
- (void)battery_receivedRowSelected:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

