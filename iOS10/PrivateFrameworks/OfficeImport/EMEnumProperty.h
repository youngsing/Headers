//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty
{
    int wdValue;
}

+ (id)mapUnderlineValue:(int)arg1;
+ (id)mapVerticalAlignmentValue:(int)arg1;
+ (id)mapHorizontalAlignmentValue:(int)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)mapUnderline;
- (id)mapVerticalAlignment;
- (id)mapHorizontalAlignment;
- (int)value;
- (id)initWithEnum:(int)arg1;

@end

