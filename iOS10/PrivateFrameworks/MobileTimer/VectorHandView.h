//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MobileTimer/HandView-Protocol.h>

@class NSString, RenderedHandViewFactory;

@interface VectorHandView : UIView <HandView>
{
    RenderedHandViewFactory *_factory;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithPDFFile:(id)arg1 offset:(struct CGPoint)arg2 scale:(struct CGSize)arg3 bundle:(id)arg4 allowCaching:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

