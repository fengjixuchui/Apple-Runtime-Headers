//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineHeroAppEngagementInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _actionType;
    NSString *_suggestionId;
    int _uiPlacement;
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
        unsigned int uiPlacement:1;
    } _has;
}

@property(nonatomic) int uiPlacement; // @synthesize uiPlacement=_uiPlacement;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *suggestionId; // @synthesize suggestionId=_suggestionId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUiPlacement;
@property(nonatomic) _Bool hasActionType;
@property(readonly, nonatomic) _Bool hasSuggestionId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

