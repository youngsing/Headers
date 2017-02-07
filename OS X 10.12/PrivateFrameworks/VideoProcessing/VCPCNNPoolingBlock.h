//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNPoolingBlock : VCPCNNBlock
{
    int _px;
    int _py;
    int _chunk;
}

- (int)doMaxPoolingChunkOne;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)forward;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;

@end
