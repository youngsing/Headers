//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDistantObject.h>

__attribute__((visibility("hidden")))
@interface NSMutableStringProxy : NSDistantObject
{
}

- (BOOL)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange)arg3 remainingRange:(struct _NSRange *)arg4;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (void)getCharacters:(unsigned short *)arg1;

@end

