//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class TVImageDecorator, _TVDecoratorRequest;

@interface TVImageProxy : NSObject <NSCopying>
{
    _Bool _cacheOnLoad;
    _Bool _imageAvailable;
    _Bool _isLoading;
    _Bool _loadSynchronouslyIfCached;
    _Bool _writeToAssetLibrary;
    id _object;
    id _imageLoader;
    TVImageDecorator *_decorator;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _writeCompletionHandler;
    long long _groupType;
    id _requestToken;
    _TVDecoratorRequest *_decoratorRequestToken;
    id _imageDidWriteObserver;
}

+ (id)_imageDecoratorQueue;
@property(nonatomic) _Bool writeToAssetLibrary; // @synthesize writeToAssetLibrary=_writeToAssetLibrary;
@property(nonatomic) _Bool loadSynchronouslyIfCached; // @synthesize loadSynchronouslyIfCached=_loadSynchronouslyIfCached;
@property(retain, nonatomic) id imageDidWriteObserver; // @synthesize imageDidWriteObserver=_imageDidWriteObserver;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) _TVDecoratorRequest *decoratorRequestToken; // @synthesize decoratorRequestToken=_decoratorRequestToken;
@property(retain, nonatomic) id requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(nonatomic, getter=isImageAvailable) _Bool imageAvailable; // @synthesize imageAvailable=_imageAvailable;
@property(copy) CDUnknownBlockType writeCompletionHandler; // @synthesize writeCompletionHandler=_writeCompletionHandler;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) TVImageDecorator *decorator; // @synthesize decorator=_decorator;
@property(nonatomic) _Bool cacheOnLoad; // @synthesize cacheOnLoad=_cacheOnLoad;
@property(retain, nonatomic) id imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)_callWriteCompletionHandlerWithPath:(id)arg1 error:(id)arg2 finished:(_Bool)arg3;
- (void)_callCompletionHandlerWithImage:(id)arg1 error:(id)arg2 finished:(_Bool)arg3;
- (void)cancel;
- (id)_imageAssetPathWithAssetKey:(id)arg1;
- (id)_decoratedImageAssetPath;
- (id)_originalImageAssetPath;
- (id)_decoratedImageAssetKey;
- (id)_originalImageAssetKey;
- (id)_imageLoaderKey;
- (id)_assetKeyWithImageLoaderKey:(id)arg1 decoratorIdentifier:(id)arg2;
- (id)_decoratorIdentifier;
- (void)_imageDidWriteHandler:(id)arg1;
- (void)_completeImageLoadWithImage:(id)arg1 imagePath:(id)arg2 error:(id)arg3 assetKey:(id)arg4 expiryDate:(id)arg5;
- (void)_decorateAndWriteImage:(id)arg1 imagePath:(id)arg2 scaleToSize:(struct CGSize)arg3 cropToFit:(_Bool)arg4 scalingResult:(unsigned long long)arg5 assetKey:(id)arg6 expiryDate:(id)arg7;
- (void)load;
@property(readonly, nonatomic) struct CGSize expectedSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithObject:(id)arg1 imageLoader:(id)arg2 groupType:(long long)arg3;
- (void)loadWithWeakObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

