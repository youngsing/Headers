//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SiriCoreLocalSpeechDESRecord;

@protocol AFSpeechService <NSObject>
- (oneway void)runAdaptationRecipeEvaluation:(NSDictionary *)arg1 localSpeechDESRecord:(SiriCoreLocalSpeechDESRecord *)arg2 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg3;
- (oneway void)fetchAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getOfflineDictationStatusWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 existingProfile:(NSData *)arg2 userData:(NSDictionary *)arg3 localSpeechDESRecord:(SiriCoreLocalSpeechDESRecord *)arg4 completion:(void (^)(NSData *, NSError *))arg5;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 JSONData:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)combineServerPhrases:(NSArray *)arg1 serverUtterances:(NSArray *)arg2 localPhrases:(NSArray *)arg3 localUtterances:(NSArray *)arg4 language:(NSString *)arg5 completion:(void (^)(NSArray *, NSArray *, NSError *))arg6;
- (oneway void)finishAudio;
- (oneway void)addAudioPacket:(NSData *)arg1;
- (oneway void)startSpeechRecognitionWithLanguage:(NSString *)arg1 task:(NSString *)arg2 context:(NSArray *)arg3 profile:(NSData *)arg4 userData:(NSDictionary *)arg5 narrowband:(_Bool)arg6 detectUtterances:(_Bool)arg7 censorSpeech:(_Bool)arg8 maximumRecognitionDuration:(double)arg9 didStartHandler:(void (^)(NSString *, NSError *))arg10;
- (oneway void)startRequestActivityWithCompletion:(void (^)(void))arg1;
@end
