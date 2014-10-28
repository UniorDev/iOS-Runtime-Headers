/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying> {
    CKDPDate *_creation;
    CKDPDate *_modification;
}

@property(retain) CKDPDate * creation;
@property(readonly) BOOL hasCreation;
@property(readonly) BOOL hasModification;
@property(retain) CKDPDate * modification;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creation;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCreation;
- (BOOL)hasModification;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modification;
- (BOOL)readFrom:(id)arg1;
- (void)setCreation:(id)arg1;
- (void)setModification:(id)arg1;
- (void)writeTo:(id)arg1;

@end