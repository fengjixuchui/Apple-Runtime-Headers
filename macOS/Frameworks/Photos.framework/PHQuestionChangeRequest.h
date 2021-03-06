//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSDate, NSDictionary, NSManagedObjectID, NSString;

@interface PHQuestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
}

+ (void)deleteQuestions:(id)arg1;
+ (id)changeRequestForQuestion:(id)arg1;
+ (BOOL)canGenerateUUIDWithoutEntitlements;
+ (id)creationRequestForQuestionWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7 creationDate:(id)arg8;
@property(copy, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) NSDictionary *additionalInfo;
@property(copy, nonatomic) NSString *entityIdentifier;
@property(nonatomic) double score;
@property(nonatomic) unsigned short displayType;
@property(nonatomic) unsigned short entityType;
@property(nonatomic) unsigned short state;
@property(nonatomic) unsigned short type;
- (BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic) CDUnknownBlockType concurrentWorkBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isNewRequest;
@property(readonly, getter=isMutated) BOOL mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;

@end

