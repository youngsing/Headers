//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVMusicContextMenuDataItem : NSObject
{
    _Bool _disabled;
    _Bool _hasCheckmark;
    NSString *_title;
    NSString *_identifier;
    long long _menuItemType;
    CDUnknownBlockType _actionBlock;
}

@property(nonatomic) _Bool hasCheckmark; // @synthesize hasCheckmark=_hasCheckmark;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long menuItemType; // @synthesize menuItemType=_menuItemType;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;

@end
