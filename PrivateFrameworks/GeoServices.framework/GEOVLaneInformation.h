/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneInformation : PBCodable  {
    unsigned int _style;
    unsigned int _validityMask;
}

@property unsigned int style;
@property unsigned int validityMask;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setValidityMask:(unsigned int)arg1;
- (unsigned int)validityMask;
- (void)copyTo:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)style;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end