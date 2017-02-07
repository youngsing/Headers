//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryOrderSpec : XQueryExpr <XQueryExprBehavior>
{
    id _expr;
    id _collation;
    BOOL _ascending;
    BOOL _emptyLeast;
}

+ (id)orderSpec:(id)arg1 ascending:(BOOL)arg2 emptyLeast:(BOOL)arg3 collation:(id)arg4;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)collation;
- (BOOL)ascending;
- (BOOL)emptyLeast;
- (void)setExpr:(id)arg1;
- (id)initWithExpr:(id)arg1 ascending:(BOOL)arg2 emptyLeast:(BOOL)arg3 collation:(id)arg4;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
