//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebDriver/NSObject-Protocol.h>

@class NSDictionary;
@protocol WDServiceHost, WDSessionHost;

@protocol WDSessionHostDelegate <NSObject>
@property(readonly, nonatomic) id <WDServiceHost> serviceHost;
- (void)hostConnectionTerminated:(id <WDSessionHost>)arg1;

@optional
- (NSDictionary *)forwardedCapabilitiesForSession:(id <WDSessionHost>)arg1;
@end

