//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FolderActionsKit/FAScriptableObject.h>

@class NSData, NSNumber, NSString, NSURL;

@interface FAScript : FAScriptableObject
{
    NSURL *_url;
    NSNumber *_enabled;
    BOOL _isWorkflow;
    BOOL _propagateChangesToFolderActionsDispatcher;
    NSData *_bookmark;
}

+ (id)scriptWithBookmark:(id)arg1 name:(id)arg2 enabled:(id)arg3;
+ (id)scriptWithURL:(id)arg1;
+ (id)scriptWithURL:(id)arg1 enabled:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)keyInContainer;
@property BOOL propagateChangesToFolderActionsDispatcher; // @synthesize propagateChangesToFolderActionsDispatcher=_propagateChangesToFolderActionsDispatcher;
@property BOOL isWorkflow; // @synthesize isWorkflow=_isWorkflow;
@property(retain) NSData *bookmark; // @synthesize bookmark=_bookmark;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)deleteVerb:(id)arg1;
- (void)updateName;
- (void)propagateNewURLOrSetScriptError:(id)arg1;
@property(retain) NSString *posixPath;
@property(retain) NSString *hfsPath;
@property(retain) NSNumber *enabled;
@property(retain) NSURL *url;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

