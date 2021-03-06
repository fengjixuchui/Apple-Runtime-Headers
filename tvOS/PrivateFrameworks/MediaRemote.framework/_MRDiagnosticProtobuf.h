//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRDiagnosticProtobuf : PBCodable <NSCopying>
{
    double _dateGenerated;
    NSString *_diagnosticInfo;
    struct {
        unsigned int dateGenerated:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *diagnosticInfo; // @synthesize diagnosticInfo=_diagnosticInfo;
@property(nonatomic) double dateGenerated; // @synthesize dateGenerated=_dateGenerated;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDiagnosticInfo;
@property(nonatomic) _Bool hasDateGenerated;

@end

