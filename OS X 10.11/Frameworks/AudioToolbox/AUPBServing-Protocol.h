//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;

@protocol AUPBServing
- (void)setAudioUnit:(unsigned long long)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(float)arg5 withReply:(void (^)(int))arg6;
- (void)getAudioUnit:(unsigned long long)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(void (^)(int, float))arg5;
- (void)setAudioUnit:(unsigned long long)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(NSData *)arg5 withReply:(void (^)(int))arg6;
- (void)getAudioUnit:(unsigned long long)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(void (^)(int, NSData *))arg5;
- (void)getAudioUnit:(unsigned long long)arg1 propertyInfo:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(void (^)(int, unsigned int, unsigned char))arg5;
- (void)setProcessingBlock:(unsigned long long)arg1 property:(unsigned int)arg2 value:(NSData *)arg3 withReply:(void (^)(int))arg4;
- (void)copyProcessingBlock:(unsigned long long)arg1 property:(unsigned int)arg2 intoReply:(void (^)(int, NSData *))arg3;
@end

