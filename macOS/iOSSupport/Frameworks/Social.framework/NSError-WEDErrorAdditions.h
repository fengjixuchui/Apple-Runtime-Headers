//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (WEDErrorAdditions)
+ (id)APIGenericErrorFromErrorCode:(long long)arg1;
+ (id)APIFakeUserErrorFromErrorCode:(long long)arg1;
+ (id)APIUserErrorFromErrorCode:(long long)arg1;
+ (id)APIInternalServerErrorFromErrorCode:(long long)arg1;
+ (id)APIAuthorizationErrorFromErrorCode:(long long)arg1;
+ (id)APILimitErrorFromErrorCode:(long long)arg1;
+ (id)APIParameterErrorFromErrorCode:(long long)arg1;
+ (id)errorFromTencentWeiboAPIResponseErrorWithType:(long long)arg1 code:(long long)arg2;
- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;
@end

