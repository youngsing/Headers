//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
{
}

+ (_Bool)enumerateEventsForWorkout:(long long)arg1 withStatement:(id)arg2 error:(id *)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)statementForEnumeratingEventsForWorkoutInDatabase:(id)arg1 error:(id *)arg2;
+ (id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1;
+ (id)workoutEventsWithWorkoutID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)insertWorkoutEventsFromWorkout:(id)arg1 workoutPersistentID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)insertWorkoutEventWithWorkoutID:(id)arg1 date:(id)arg2 eventType:(long long)arg3 metadata:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (long long)protectionClass;
+ (id)columnsDefinition;
+ (id)databaseTable;

@end

