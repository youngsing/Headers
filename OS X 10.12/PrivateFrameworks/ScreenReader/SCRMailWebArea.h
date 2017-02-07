//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRWebArea.h>

#import <ScreenReader/SCRMailMessageContent-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRMailWebArea : SCRWebArea <SCRMailMessageContent>
{
    unsigned long long _lastQuoteLevel;
}

@property(nonatomic) unsigned long long lastQuoteLevel; // @synthesize lastQuoteLevel=_lastQuoteLevel;
- (CDStruct_79add89a)shouldMoveFocusFromElement:(id)arg1 toElement:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (void)addContentToRequest:(id)arg1;
- (Class)webAreaClassForChildUIElement:(id)arg1 parent:(id)arg2;
- (void)handleTextNavigationWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4 outputRequest:(id)arg5;
- (id)newOutputRequestForTextMarkerRange:(id)arg1 withUIElement:(id)arg2 command:(CDStruct_97f7034d)arg3 lastSelectedTextMarkerRange:(id)arg4 selectedTextMarkerRange:(id)arg5 variants:(id)arg6;
- (void)_updateQuoteLevelForTextMarkerRange:(id)arg1 uiElement:(id)arg2 command:(CDStruct_97f7034d)arg3 outputRequest:(id)arg4;
- (BOOL)_handleOpenContextualMenuAtSelectedTextRange:(id)arg1;
- (BOOL)_handleDoNotOpenContextualMenuWithRequest:(id)arg1;
- (BOOL)_handleOpenContextualMenuWithRequest:(id)arg1;
- (BOOL)_handleMagicPressEventWithRequest:(id)arg1;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)roleDescription;
- (id)typeDescription;
- (id)valueDescription;
- (id)attributedValueDescription;
- (unsigned long long)_quoteLevelForTextMarker:(id)arg1 withUIElement:(id)arg2;
- (void)_prependOutputRequest:(id)arg1 withQuoteLevel:(unsigned long long)arg2;
- (BOOL)_isOpenContextualMenuEvent:(id)arg1;
- (BOOL)_isMagicPressEvent:(id)arg1;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
