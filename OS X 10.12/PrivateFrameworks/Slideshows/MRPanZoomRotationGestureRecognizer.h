//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/MRGestureRecognizer.h>

@class NSString;

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer
{
    NSString *_type;
    double _factor;
    unsigned char _direction;
    BOOL _isMaster;
}

@property(readonly) unsigned char direction; // @synthesize direction=_direction;
- (void)_postProcess;
- (void)_addSpecificObjectToAction:(id)arg1;
- (void)recognize;
- (void)touchEnded:(id)arg1;
- (void)touchMoved:(id)arg1;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 masterAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4;
- (id)initWithRenderer:(id)arg1 endAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4;
- (id)initWithRenderer:(id)arg1 startAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4;

@end

