//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHVideoRequestOptions : NSObject
{
    _Bool _networkAccessAllowed;
    _Bool _streamingAllowed;
    _Bool _videoComplementAllowed;
    long long _version;
    long long _deliveryMode;
    CDUnknownBlockType _progressHandler;
    long long _contentMode;
    struct CGSize _targetSize;
}

@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic, getter=isVideoComplementAllowed) _Bool videoComplementAllowed; // @synthesize videoComplementAllowed=_videoComplementAllowed;
@property(nonatomic, getter=isStreamingAllowed) _Bool streamingAllowed; // @synthesize streamingAllowed=_streamingAllowed;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

