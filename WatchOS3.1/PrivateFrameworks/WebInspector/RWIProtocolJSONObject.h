//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolJSONObject : NSObject
{
    RefPtr_441310bd _inspectorObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (RefPtr_97d4108e)inspectorArrayForKey:(id)arg1;
- (void)setInspectorArray:(RefPtr_97d4108e *)arg1 forKey:(id)arg2;
- (void)removeKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (RefPtr_441310bd)toInspectorObject;
- (id)initWithInspectorObject:(const struct InspectorObject *)arg1;
- (id)init;

@end

