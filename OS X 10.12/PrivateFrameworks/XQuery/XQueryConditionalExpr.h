//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryConditionalExpr : XQueryExpr <XQueryExprBehavior>
{
    id _test;
    id _then;
    id _else;
}

+ (id)condionalExpr:(id)arg1 thenExpr:(id)arg2 elseExpr:(id)arg3;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)intWithTestExpr:(id)arg1 thenExpr:(id)arg2 elseExpr:(id)arg3;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
