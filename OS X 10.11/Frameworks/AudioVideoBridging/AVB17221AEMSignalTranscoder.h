//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMBaseControl.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class AVB17221AEMControlDescriptorValue;

@interface AVB17221AEMSignalTranscoder : AVB17221AEMBaseControl <NSCopying>
{
    unsigned short signalType;
    unsigned short signalIndex;
    unsigned short signalOutput;
    unsigned short internalControlValueType;
    unsigned long long transcoderType;
    AVB17221AEMControlDescriptorValue *value;
}

+ (id)keyPathsForValuesAffectingUnknownValue;
+ (id)keyPathsForValuesAffectingReadOnly;
+ (id)keyPathsForValuesAffectingControlValueType;
@property unsigned short internalControlValueType; // @synthesize internalControlValueType;
@property(copy) AVB17221AEMControlDescriptorValue *value; // @synthesize value;
@property unsigned long long transcoderType; // @synthesize transcoderType;
@property unsigned short signalOutput; // @synthesize signalOutput;
@property unsigned short signalIndex; // @synthesize signalIndex;
@property unsigned short signalType; // @synthesize signalType;
- (void)dealloc;
@property(getter=isUnknownValue) BOOL unknownValue; // @dynamic unknownValue;
@property(getter=isReadOnly) BOOL readOnly; // @dynamic readOnly;
@property unsigned short controlValueType; // @dynamic controlValueType;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (void)_updateWithValuesElement:(id)arg1;
- (id)xmlRepresentation;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

