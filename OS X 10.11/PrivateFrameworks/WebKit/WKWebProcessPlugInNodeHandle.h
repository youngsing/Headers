//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKWebProcessPlugInFrame;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;
}

+ (id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2;
@property(readonly) struct Object *_apiObject;
@property(readonly) struct InjectedBundleNodeHandle *_nodeHandle;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *frame;
@property(readonly, nonatomic) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
- (BOOL)isTextField;
@property(readonly, nonatomic) BOOL HTMLTextAreaElementIsUserEdited;
@property(readonly, nonatomic) BOOL HTMLInputElementIsUserEdited;
@property(nonatomic) BOOL HTMLInputElementIsAutoFilled;
@property(readonly, nonatomic) struct CGRect elementBounds;
- (id)renderedImageWithOptions:(unsigned int)arg1;
- (id)htmlIFrameElementContentFrame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

