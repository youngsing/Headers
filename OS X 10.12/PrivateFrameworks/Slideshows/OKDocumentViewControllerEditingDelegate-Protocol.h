//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, OKDocumentViewController, OKDocumentWidget;

@protocol OKDocumentViewControllerEditingDelegate <NSObject>

@optional
- (void)documentViewController:(OKDocumentViewController *)arg1 willChangeFocusForTextWidget:(OKDocumentWidget *)arg2 toFocusState:(BOOL)arg3;
- (void)documentViewController:(OKDocumentViewController *)arg1 didChangeTextForWidget:(OKDocumentWidget *)arg2 toSettings:(NSDictionary *)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 shouldChangeTextForWidget:(OKDocumentWidget *)arg2 toSettings:(NSMutableDictionary *)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 canEditTextForWidget:(OKDocumentWidget *)arg2;
- (void)documentViewController:(OKDocumentViewController *)arg1 didPanMediaForWidget:(OKDocumentWidget *)arg2 toOffset:(struct CGPoint)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 shouldPanMediaForWidget:(OKDocumentWidget *)arg2 toOffset:(struct CGPoint)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 canPanMediaForWidget:(OKDocumentWidget *)arg2;
@end
