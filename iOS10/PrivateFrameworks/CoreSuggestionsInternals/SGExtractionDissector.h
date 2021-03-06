//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSXPCConnection, SGAsset;
@protocol SGReverseTemplateJS;

@interface SGExtractionDissector : SGPipelineDissector
{
    NSXPCConnection *_xpcConnection;
    id <SGReverseTemplateJS> _reverseTemplateJS;
    SGAsset *_asset;
}

+ (id)addressDictionaryToString:(id)arg1;
+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2 allowAlternatives:(_Bool)arg3;
+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2;
+ (id)parseISO8601:(id)arg1;
- (void).cxx_destruct;
- (id)jsonLdOutputFromEntity:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)eventsFromSchemaOrgItems:(id)arg1;
- (_Bool)shouldIgnorePipelineEntity:(id)arg1;
- (id)packedEntityForJS:(id)arg1;
- (id)entityForOutputItem:(id)arg1 templateShortname:(id)arg2 parentEntity:(id)arg3 outputIssueTypes:(id)arg4 outputInfos:(id)arg5;
- (id)init;

@end

