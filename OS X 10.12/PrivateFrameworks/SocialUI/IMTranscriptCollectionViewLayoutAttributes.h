//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewLayoutAttributes.h>

@class IMTranscriptItem;

@interface IMTranscriptCollectionViewLayoutAttributes : NSCollectionViewLayoutAttributes
{
    struct CGRect _targetFrame;
    struct CGRect _currentFrame;
    double _easing;
    double _targetEasing;
    unsigned char _orientation;
    struct CATransform3D _contentTransform3D;
    double _targetCenterY;
    double _currentCenterY;
    double _height;
    double _factor;
    BOOL _hidden;
    IMTranscriptItem *_transcriptItem;
}

@property(retain, nonatomic) IMTranscriptItem *transcriptItem; // @synthesize transcriptItem=_transcriptItem;
@property(readonly) struct CATransform3D contentTransform3D; // @synthesize contentTransform3D=_contentTransform3D;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
