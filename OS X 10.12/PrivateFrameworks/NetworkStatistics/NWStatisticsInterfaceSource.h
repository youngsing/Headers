//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkStatistics/NWStatisticsSource.h>

@class NSString;

@interface NWStatisticsInterfaceSource : NWStatisticsSource
{
    struct nstat_ifnet_descriptor _descriptor;
    NSString *_interfaceName;
    NSString *_interfaceDescription;
    unsigned long long _linkQualityMetric;
    unsigned long long _ulMaxBandwidth;
    unsigned long long _ulEffectiveBandwidth;
    unsigned long long _ulBytesLost;
    unsigned long long _ulMinLatency;
    unsigned long long _ulEffectiveLatency;
    unsigned long long _ulMaxLatency;
    unsigned long long _ulReTxtLevel;
    unsigned long long _dlMaxBandwidth;
    unsigned long long _dlEffectiveBandwidth;
    unsigned long long _cellUlMinQueueSize;
    unsigned long long _cellUlAvgQueueSize;
    unsigned long long _cellUlMaxQueueSize;
    unsigned long long _cellConfigInactivityTime;
    unsigned long long _cellConfigBackoffTime;
    unsigned long long _wifiUlErrorRate;
    unsigned long long _wifiDlMinLatency;
    unsigned long long _wifiDlEffectiveLatency;
    unsigned long long _wifiDlMaxLatency;
    unsigned long long _wifiDlErrorRate;
    unsigned long long _wifiConfigFrequency;
    unsigned long long _wifiConfigMulticastRate;
    unsigned long long _wifiScanCount;
    unsigned long long _wifiScanDuration;
}

@property unsigned long long wifiScanDuration; // @synthesize wifiScanDuration=_wifiScanDuration;
@property unsigned long long wifiScanCount; // @synthesize wifiScanCount=_wifiScanCount;
@property unsigned long long wifiConfigMulticastRate; // @synthesize wifiConfigMulticastRate=_wifiConfigMulticastRate;
@property unsigned long long wifiConfigFrequency; // @synthesize wifiConfigFrequency=_wifiConfigFrequency;
@property unsigned long long wifiDlErrorRate; // @synthesize wifiDlErrorRate=_wifiDlErrorRate;
@property unsigned long long wifiDlMaxLatency; // @synthesize wifiDlMaxLatency=_wifiDlMaxLatency;
@property unsigned long long wifiDlEffectiveLatency; // @synthesize wifiDlEffectiveLatency=_wifiDlEffectiveLatency;
@property unsigned long long wifiDlMinLatency; // @synthesize wifiDlMinLatency=_wifiDlMinLatency;
@property unsigned long long wifiUlErrorRate; // @synthesize wifiUlErrorRate=_wifiUlErrorRate;
@property unsigned long long cellConfigBackoffTime; // @synthesize cellConfigBackoffTime=_cellConfigBackoffTime;
@property unsigned long long cellConfigInactivityTime; // @synthesize cellConfigInactivityTime=_cellConfigInactivityTime;
@property unsigned long long cellUlMaxQueueSize; // @synthesize cellUlMaxQueueSize=_cellUlMaxQueueSize;
@property unsigned long long cellUlAvgQueueSize; // @synthesize cellUlAvgQueueSize=_cellUlAvgQueueSize;
@property unsigned long long cellUlMinQueueSize; // @synthesize cellUlMinQueueSize=_cellUlMinQueueSize;
@property unsigned long long dlEffectiveBandwidth; // @synthesize dlEffectiveBandwidth=_dlEffectiveBandwidth;
@property unsigned long long dlMaxBandwidth; // @synthesize dlMaxBandwidth=_dlMaxBandwidth;
@property unsigned long long ulReTxtLevel; // @synthesize ulReTxtLevel=_ulReTxtLevel;
@property unsigned long long ulMaxLatency; // @synthesize ulMaxLatency=_ulMaxLatency;
@property unsigned long long ulEffectiveLatency; // @synthesize ulEffectiveLatency=_ulEffectiveLatency;
@property unsigned long long ulMinLatency; // @synthesize ulMinLatency=_ulMinLatency;
@property unsigned long long ulBytesLost; // @synthesize ulBytesLost=_ulBytesLost;
@property unsigned long long ulEffectiveBandwidth; // @synthesize ulEffectiveBandwidth=_ulEffectiveBandwidth;
@property unsigned long long ulMaxBandwidth; // @synthesize ulMaxBandwidth=_ulMaxBandwidth;
@property unsigned long long linkQualityMetric; // @synthesize linkQualityMetric=_linkQualityMetric;
@property(retain) NSString *interfaceDescription; // @synthesize interfaceDescription=_interfaceDescription;
@property(retain) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 interface:(long long)arg2 threshold:(long long)arg3;
- (id)description;
- (BOOL)handleDescriptor:(void *)arg1 length:(unsigned long long)arg2;
- (void)_handleWifiExtra:(struct nstat_ifnet_desc_wifi_status *)arg1;
- (void)_handleCellExtra:(struct nstat_ifnet_desc_cellular_status *)arg1;
- (id)createCounts;
- (void)_invalidateAllExtraCounts;
- (void)_invalidateWifiCounts;
- (void)_invalidateCellCounts;
- (void)_invalidateCommonCounts;
@property(readonly) long long threshold;
@property(readonly) long long interface;
@property(readonly) long long interfaceType;

@end
