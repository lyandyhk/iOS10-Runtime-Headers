/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSString, CKDPIdentifier;

@interface CKDPPublicKey : PBCodable <NSCopying> {
    NSData *_keyData;
    NSString *_keyHash;
    CKDPIdentifier *_userId;
}

@property(readonly) bool hasUserId;
@property(retain) CKDPIdentifier * userId;
@property(readonly) bool hasKeyData;
@property(retain) NSData * keyData;
@property(readonly) bool hasKeyHash;
@property(retain) NSString * keyHash;


- (id)keyHash;
- (id)keyData;
- (bool)hasKeyHash;
- (bool)hasKeyData;
- (void)setKeyHash:(id)arg1;
- (void)setKeyData:(id)arg1;
- (id)userId;
- (bool)hasUserId;
- (void)setUserId:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end