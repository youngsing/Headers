//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_Image : IMTranscoder
{
}

+ (id)supportedUTIs;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)_getScaleFactorArray:(id)arg1 transferURL:(id)arg2 outputURLs:(id)arg3;
- (unsigned long long)_getImageWidth:(struct CGImageSource *)arg1;
- (id)_writeRepresentationsForImage:(struct CGImageSource *)arg1 target:(long long)arg2 sourceURL:(id)arg3 sizes:(id)arg4 maxDimension:(unsigned long long)arg5 srcUTI:(struct __CFString *)arg6 inFormat:(struct __CFString *)arg7;
- (id)_writeImage:(struct CGImageSource *)arg1 sourceURL:(id)arg2 target:(long long)arg3 hardwareEncoder:(id)arg4 inFormat:(struct __CFString *)arg5 fromFormat:(struct __CFString *)arg6 withMaxByteSize:(unsigned long long)arg7 maxDimension:(unsigned long long)arg8 actualSize:(unsigned long long *)arg9 startingLengthIndex:(int)arg10 usedLengthIndex:(int *)arg11;
- (id)_writeImageData:(id)arg1 inFormat:(struct __CFString *)arg2 sourceURL:(id)arg3;
- (id)_generateImage:(struct CGImageSource *)arg1 target:(long long)arg2 hardwareEncoder:(id)arg3 inFormat:(struct __CFString *)arg4 fromFormat:(struct __CFString *)arg5 withMaxLength:(unsigned long long)arg6 withMaxCount:(unsigned long long)arg7 enforceMaxes:(BOOL)arg8 subsampling:(int)arg9;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (BOOL)_isWideGamutImage:(struct CGImageSource *)arg1;

@end

