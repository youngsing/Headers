//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface WKImagePreviewViewController : UIViewController
{
    RetainPtr_f649c0c3 _imageActions;
    RetainPtr_5a40b48a _activatedElementInfo;
    RetainPtr_c27edd19 _image;
    struct RetainPtr<UIImageView> _imageView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)previewActions;
- (void)viewDidLayoutSubviews;
- (id)initWithCGImage:(RetainPtr_c27edd19)arg1 defaultActions:(RetainPtr_f649c0c3)arg2 elementInfo:(RetainPtr_5a40b48a)arg3;
- (void)loadView;

@end
