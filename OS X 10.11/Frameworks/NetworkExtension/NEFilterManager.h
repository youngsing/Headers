//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NEFilterProviderConfiguration, NSString;

@interface NEFilterManager : NSObject <NEPrettyDescription>
{
    BOOL _hasLoaded;
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
}

+ (id)sharedManager;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
@property(copy) NSString *localizedDescription;
@property(getter=isEnabled) BOOL enabled;
@property(retain) NEFilterProviderConfiguration *providerConfiguration;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFilterManagerWithPluginType:(id)arg1;
- (void)createEmptyConfiguration;
- (id)init;

@end

