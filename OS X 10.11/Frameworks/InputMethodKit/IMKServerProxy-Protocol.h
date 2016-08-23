//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IMKEvent, NSDictionary;

@protocol IMKServerProxy
- (void)ironwoodPlaceholderWasInvalidated:(id)arg1 client:(id)arg2;
- (void)ironwoodTextWasCorrected:(id)arg1 client:(id)arg2;
- (void)sendInputSessionSessAction:(unsigned int)arg1 timestamp:(double)arg2 withInfo:(NSDictionary *)arg3 client:(id)arg4;
- (void)sendInputSessionSessAction:(unsigned int)arg1 client:(id)arg2;
- (unsigned long long)recognizedEvents:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1 commandDictionary:(NSDictionary *)arg2 client:(id)arg3;
- (BOOL)didCommandBySelector:(SEL)arg1 client:(id)arg2;
- (void)hidePalettes:(id)arg1;
- (void)commitComposition:(id)arg1;
- (BOOL)handleEvent:(bycopy IMKEvent *)arg1 characterIndex:(unsigned long long)arg2 edge:(unsigned long long)arg3 client:(id)arg4;
- (NSDictionary *)menusDictionary:(id)arg1;
- (NSDictionary *)modes:(id)arg1;
- (void)setValue:(id)arg1 forTag:(unsigned long long)arg2 client:(id)arg3;
- (id)valueForTag:(unsigned long long)arg1 client:(id)arg2;
- (void)sessionFinished:(id)arg1;
- (void)deactivateServer:(id)arg1;
- (void)activateServer:(id)arg1;
@end

