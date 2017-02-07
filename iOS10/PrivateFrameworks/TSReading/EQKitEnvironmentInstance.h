//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment
{
    NSDictionary *mConfig;
    struct Dictionary *mOperatorDictionary;
    struct Manager {
        CDUnknownFunctionPointerType *;
        struct Collection *;
        struct EQKitCacheLRUCounter;
    } *mFontManager;
    struct Manager {
        struct EQKitCache<EQKit::OpticalKern::Glyph::Key, std::__1::shared_ptr<EQKit::OpticalKern::Edge::Path>, std::__1::shared_ptr<const EQKit::OpticalKern::Edge::Path>> *;
        struct EQKitCacheLRUCounter;
        _Bool;
        struct QuantizationConfig;
    } *mKerningManager;
    struct Config *mLayoutConfig;
}

+ (id)dataForEnvironment:(id)arg1;
+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)arg1;
@property(nonatomic) _Bool kerning;
- (void)endLayout;
- (void)beginLayout;
- (const struct Config *)layoutConfig;
- (const Manager_36464627 *)kerningManager;
- (const Manager_e51557f8 *)fontManager;
- (const struct Dictionary *)operatorDictionary;
- (id)newDictionaryForArchiving;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end
