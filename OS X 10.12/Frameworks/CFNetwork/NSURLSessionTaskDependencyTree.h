//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL, __NSCFURLSessionTaskDependencyTreeNode;

@interface NSURLSessionTaskDependencyTree : NSObject
{
}

+ (id)mimeTypeForURLString:(id)arg1;
+ (id)dependencyTreeWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2;
+ (id)dependencyTreeDefaultWeb;
- (id)_parentForMimeType:(id)arg1;
- (id)_parentForURLPath:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *_dependencies; // @dynamic _dependencies;
@property(retain, nonatomic) __NSCFURLSessionTaskDependencyTreeNode *_effectiveTree; // @dynamic _effectiveTree;
@property(retain, nonatomic) NSURL *mainDocumentURL; // @dynamic mainDocumentURL;

@end
