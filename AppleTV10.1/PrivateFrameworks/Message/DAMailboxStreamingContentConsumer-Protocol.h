//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DAMailMessage;

@protocol DAMailboxStreamingContentConsumer
- (void)didEndStreamingForMailMessage:(DAMailMessage *)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(DAMailMessage *)arg4;
- (_Bool)shouldBeginStreamingForMailMessage:(DAMailMessage *)arg1 format:(int)arg2;
@end
