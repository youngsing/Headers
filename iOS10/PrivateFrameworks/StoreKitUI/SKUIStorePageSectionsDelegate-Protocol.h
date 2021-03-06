//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIItem, SKUIStorePageSectionsViewController;

@protocol SKUIStorePageSectionsDelegate <NSObject>

@optional
- (void)sectionsViewControllerDidDismissOverlayController:(SKUIStorePageSectionsViewController *)arg1;
- (void)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 willScrollToOffset:(struct CGPoint)arg2 visibleRange:(struct SKUIIndexPathRange)arg3;
- (_Bool)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showStorePageForURL:(NSURL *)arg2;
- (_Bool)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showProductPageForItem:(SKUIItem *)arg2;
- (void)sectionsViewControllerDidScroll:(SKUIStorePageSectionsViewController *)arg1;
@end

