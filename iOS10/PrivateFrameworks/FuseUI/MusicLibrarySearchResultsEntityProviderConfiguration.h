//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseHeterogenousCollectionViewConfiguration.h>

@class MusicLibrarySearchResultsEntityProvider, NSMutableDictionary;

@interface MusicLibrarySearchResultsEntityProviderConfiguration : MusicLibraryBrowseHeterogenousCollectionViewConfiguration
{
    NSMutableDictionary *_contentDescriptorsForSectionAndTraitCollections;
    MusicLibrarySearchResultsEntityProvider *_entityValueProvider;
}

+ (id)_mediaPickerConfigurationsIncludingPlaylists:(_Bool)arg1 allowingMultipleSelection:(_Bool)arg2;
+ (id)_defaultLibraryViewConfigurations;
+ (id)mediaPickerConfigurationIncludingPlaylists:(_Bool)arg1 allowingMultipleSelection:(_Bool)arg2;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
- (void)_applyTableViewMetricsToContentDescriptor:(id)arg1;
- (id)_collectionViewDescriptorForEntityViewDescriptor:(id)arg1;
@property(readonly, nonatomic) MusicLibrarySearchResultsEntityProvider *entityProvider;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2;
- (id)loadEntityViewDescriptor;
- (id)initWithLibraryViewConfigurations:(id)arg1;

@end

