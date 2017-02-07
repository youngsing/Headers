//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <WebContentAnalysis/WFWebPageProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol>
{
    struct _xmlDoc *xmlDocument;
    NSString *pageTitle;
    NSMutableDictionary *metaTagsLabeled;
    NSMutableArray *metaTagsUnlabeled;
    NSMutableArray *scriptBlocks;
    NSMutableArray *images;
    NSString *pageContent;
    NSMutableArray *links;
    _Bool hasFrameset;
    _Bool hasShortRefresh;
}

+ (id)treeStripperWithXMLDocument:(struct _xmlDoc *)arg1;
- (void)dealloc;
- (id)description;
- (id)processXMLDocument:(struct _xmlDoc *)arg1 blockComments:(_Bool)arg2;
- (void)processXMLDocument:(struct _xmlDoc *)arg1;
- (void)strip;
- (_Bool)hasShortRefresh;
- (_Bool)hasFrameset;
- (id)links;
- (id)pageContent;
- (id)images;
- (id)scriptBlocks;
- (id)metaTagsUnlabeled;
- (id)metaTagsLabeled;
- (id)metaTagRating;
- (id)metaTagKeywords;
- (id)metaTagDescription;
- (id)pageTitle;
- (id)URLString;
- (void)setPageTitle:(id)arg1;
- (void)setXMLDocument:(struct _xmlDoc *)arg1;
- (id)initWithXMLDocument:(struct _xmlDoc *)arg1;

@end
