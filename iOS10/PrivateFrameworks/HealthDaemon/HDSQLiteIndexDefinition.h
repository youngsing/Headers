//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HDSQLiteIndexDefinition : NSObject
{
    Class _entityClass;
    NSString *_name;
    NSArray *_columns;
}

@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (void).cxx_destruct;
- (id)creationSQL;
@property(readonly, copy, nonatomic) NSString *disambiguatedName;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3;

@end

