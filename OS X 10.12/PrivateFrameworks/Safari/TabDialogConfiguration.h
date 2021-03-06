//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface TabDialogConfiguration : NSObject <NSCopying>
{
    BOOL _hasCancelButton;
    BOOL _hasPromptField;
    NSString *_message;
    NSArray *_buttonLabels;
    NSString *_originStringForAccessibility;
    NSString *_promptFieldDefaultResponse;
    NSNumber *_customWidth;
}

+ (id)openApplicationPromptConfigurationWithApplicationName:(id)arg1 originStringForAccessibility:(id)arg2;
+ (id)mailPromptConfigurationWithOriginStringForAccessibility:(id)arg1;
+ (id)telephonyPromptConfigurationWithOriginStringForAccessibility:(id)arg1;
+ (id)javaScriptPromptDialogConfigurationWithMessage:(id)arg1 defaultResponse:(id)arg2 originStringForAccessibility:(id)arg3;
+ (id)javaScriptConfirmDialogConfigurationWithMessage:(id)arg1 originStringForAccessibility:(id)arg2;
+ (id)javaScriptAlertDialogConfigurationWithMessage:(id)arg1 originStringForAccessibility:(id)arg2;
@property(readonly, nonatomic) NSNumber *customWidth; // @synthesize customWidth=_customWidth;
@property(readonly, copy, nonatomic) NSString *promptFieldDefaultResponse; // @synthesize promptFieldDefaultResponse=_promptFieldDefaultResponse;
@property(readonly, nonatomic) BOOL hasPromptField; // @synthesize hasPromptField=_hasPromptField;
@property(readonly, copy, nonatomic) NSString *originStringForAccessibility; // @synthesize originStringForAccessibility=_originStringForAccessibility;
@property(readonly, nonatomic) NSArray *buttonLabels; // @synthesize buttonLabels=_buttonLabels;
@property(readonly, nonatomic) BOOL hasCancelButton; // @synthesize hasCancelButton=_hasCancelButton;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1 hasCancelButton:(BOOL)arg2 buttonLabels:(id)arg3 originStringForAccessibility:(id)arg4 hasPromptField:(BOOL)arg5 promptFieldDefaultResponse:(id)arg6 customWidth:(id)arg7;

@end

