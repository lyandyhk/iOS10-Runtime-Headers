/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _currentTimestamp;
    double _eventTimestamp;
    double _travelDuration;
    int _actionType;
    int _alertType;
    int _travelState;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int currentTimestamp : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int travelDuration : 1; 
        unsigned int actionType : 1; 
        unsigned int alertType : 1; 
        unsigned int travelState : 1; 
    } _has;
}

@property bool hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property bool hasActionType;
@property int actionType;
@property bool hasAlertType;
@property int alertType;
@property bool hasTravelState;
@property int travelState;
@property bool hasEventTimestamp;
@property double eventTimestamp;
@property bool hasCurrentTimestamp;
@property double currentTimestamp;
@property bool hasTravelDuration;
@property double travelDuration;


- (void)setAlertType:(int)arg1;
- (int)alertType;
- (double)travelDuration;
- (double)currentTimestamp;
- (double)eventTimestamp;
- (int)travelState;
- (bool)hasTravelDuration;
- (void)setHasTravelDuration:(bool)arg1;
- (void)setTravelDuration:(double)arg1;
- (bool)hasCurrentTimestamp;
- (void)setHasCurrentTimestamp:(bool)arg1;
- (void)setCurrentTimestamp:(double)arg1;
- (bool)hasEventTimestamp;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setEventTimestamp:(double)arg1;
- (bool)hasTravelState;
- (void)setHasTravelState:(bool)arg1;
- (void)setTravelState:(int)arg1;
- (bool)hasAlertType;
- (void)setHasAlertType:(bool)arg1;
- (bool)hasActionType;
- (void)setHasActionType:(bool)arg1;
- (bool)hasSessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setActionType:(int)arg1;
- (int)actionType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end