//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKTextureAtlasPacker : NSObject
{
}

+ (struct CGImage *)copyProcessedImageSource:(id)arg1;
- (void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id *)arg2 forcePOT:(BOOL)arg3;
- (id)processPackedTextureAtlas:(const vector_c74fc2b3 *)arg1 suffix:(id)arg2 packer:(shared_ptr_7747cbe3)arg3 sortedTrimArray:(const vector_ea45b3ba *)arg4 sortedTextureArray:(const vector_65e381fc *)arg5;
- (id)generateMetaData;
- (id)getTextureFileList:(id)arg1 modDate:(id *)arg2;
- (id)partitionTextureFilesByResolution:(id)arg1;
- (BOOL)isFullyOpaque:(struct CGImage *)arg1;
- (struct CGRect)calcNonAlphaArea:(struct CGImage *)arg1;
- (struct CGImage *)copyRotateCGImage:(struct CGImage *)arg1 direction:(BOOL)arg2;

@end

