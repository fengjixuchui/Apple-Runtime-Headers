//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BookDataStore/BCMutableCloudData.h>

#import <BookDataStore/BCAssetDetail-Protocol.h>
#import <BookDataStore/NSSecureCoding-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetDetail : BCMutableCloudData <BCAssetDetail, NSSecureCoding>
{
    _Bool _isFinished;
    _Bool _notFinished;
    short _taste;
    short _tasteSyncedToStore;
    NSString *_assetID;
    NSDate *_dateFinished;
    NSDate *_lastOpenDate;
    float _readingProgress;
    float _readingProgressHighWaterMark;
    NSString *_readingPositionCFIString;
    NSString *_readingPositionAnnotationVersion;
    NSString *_readingPositionAssetVersion;
    NSData *_readingPositionUserData;
    long _readingPositionLocationRangeStart;
    long _readingPositionLocationRangeEnd;
    long _readingPositionAbsolutePhysicalLocation;
    NSString *_readingPositionStorageUUID;
    NSDate *_datePlaybackTimeUpdated;
    NSDate *_readingPositionLocationUpdateDate;
    double _bookmarkTime;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *readingPositionLocationUpdateDate; // @synthesize readingPositionLocationUpdateDate=_readingPositionLocationUpdateDate;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(copy, nonatomic) NSDate *datePlaybackTimeUpdated; // @synthesize datePlaybackTimeUpdated=_datePlaybackTimeUpdated;
@property(copy, nonatomic) NSString *readingPositionStorageUUID; // @synthesize readingPositionStorageUUID=_readingPositionStorageUUID;
@property(nonatomic) long readingPositionAbsolutePhysicalLocation; // @synthesize readingPositionAbsolutePhysicalLocation=_readingPositionAbsolutePhysicalLocation;
@property(nonatomic) long readingPositionLocationRangeEnd; // @synthesize readingPositionLocationRangeEnd=_readingPositionLocationRangeEnd;
@property(nonatomic) long readingPositionLocationRangeStart; // @synthesize readingPositionLocationRangeStart=_readingPositionLocationRangeStart;
@property(copy, nonatomic) NSData *readingPositionUserData; // @synthesize readingPositionUserData=_readingPositionUserData;
@property(copy, nonatomic) NSString *readingPositionAssetVersion; // @synthesize readingPositionAssetVersion=_readingPositionAssetVersion;
@property(copy, nonatomic) NSString *readingPositionAnnotationVersion; // @synthesize readingPositionAnnotationVersion=_readingPositionAnnotationVersion;
@property(copy, nonatomic) NSString *readingPositionCFIString; // @synthesize readingPositionCFIString=_readingPositionCFIString;
@property(nonatomic) float readingProgressHighWaterMark; // @synthesize readingProgressHighWaterMark=_readingProgressHighWaterMark;
@property(nonatomic) float readingProgress; // @synthesize readingProgress=_readingProgress;
@property(copy, nonatomic) NSDate *lastOpenDate; // @synthesize lastOpenDate=_lastOpenDate;
@property(copy, nonatomic) NSDate *dateFinished; // @synthesize dateFinished=_dateFinished;
@property(nonatomic) short tasteSyncedToStore; // @synthesize tasteSyncedToStore=_tasteSyncedToStore;
@property(nonatomic) short taste; // @synthesize taste=_taste;
@property(nonatomic) _Bool notFinished; // @synthesize notFinished=_notFinished;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) _Bool isAudiobook;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)configuredRecordFromAttributes;
- (id)zoneName;
- (id)identifier;
- (id)recordType;
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)initWithAssetID:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

