//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IOBluetoothDevice, IOBluetoothDeviceInquiryTableView;

@protocol IOBluetoothDeviceInquiryTableViewDelegate

@optional
- (void)deviceInquiryTableViewInquiryComplete:(IOBluetoothDeviceInquiryTableView *)arg1 error:(int)arg2 aborted:(BOOL)arg3;
- (void)deviceInquiryTableViewInquiryIterationComplete:(IOBluetoothDeviceInquiryTableView *)arg1;
- (void)deviceInquiryTableViewInquiryDeviceNameUpdated:(IOBluetoothDeviceInquiryTableView *)arg1 device:(IOBluetoothDevice *)arg2 devicesRemaining:(int)arg3;
- (void)deviceInquiryTableViewInquiryUpdatingNameOfDevice:(IOBluetoothDeviceInquiryTableView *)arg1 device:(IOBluetoothDevice *)arg2 devicesRemaining:(int)arg3;
- (void)deviceInquiryTableViewInquiryUpdatingDeviceNamesStarted:(IOBluetoothDeviceInquiryTableView *)arg1 devicesRemaining:(int)arg2;
- (void)deviceInquiryTableViewInquiryDeviceFound:(IOBluetoothDeviceInquiryTableView *)arg1 device:(IOBluetoothDevice *)arg2;
- (void)deviceInquiryTableViewInquiryStarted:(IOBluetoothDeviceInquiryTableView *)arg1;
@end

