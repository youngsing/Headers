//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@interface MDLNormalMapTexture : MDLTexture
{
    float _smoothness;
    float _contrast;
    MDLTexture *_sourceTexture;
}

- (void).cxx_destruct;
- (id)initByGeneratingNormalMapWithTexture:(id)arg1 name:(id)arg2 smoothness:(float)arg3 contrast:(float)arg4;
- (id)generateDataAtLevel:(long long)arg1;

@end

