//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _DPDataRecorder><_DPDataRecorderKeyProperties;

@interface _DPWordRecorder : NSObject
{
    unsigned long long _wordFragmentWidth;
    id <_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;
}

@property(readonly, nonatomic) id <_DPDataRecorder><_DPDataRecorderKeyProperties> recorder; // @synthesize recorder=_recorder;
@property(readonly, nonatomic) unsigned long long wordFragmentWidth; // @synthesize wordFragmentWidth=_wordFragmentWidth;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3;
- (id)description;
- (BOOL)record:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

