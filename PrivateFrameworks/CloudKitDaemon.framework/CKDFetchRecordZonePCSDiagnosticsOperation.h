/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKPCSDiagnosticInformation, NSDictionary, NSArray;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation  {
    CKPCSDiagnosticInformation *_pcsDiagnosticInfo;
    NSString *_identityStatus;
    NSDictionary *_invalidPCSByZoneID;
    NSDictionary *_validPCSByZoneID;
    NSArray *_recordZoneIDs;
}

@property(retain) CKPCSDiagnosticInformation * pcsDiagnosticInfo;
@property(retain) NSString * identityStatus;
@property(retain) NSDictionary * invalidPCSByZoneID;
@property(retain) NSDictionary * validPCSByZoneID;
@property(retain) NSArray * recordZoneIDs;


- (void)setValidPCSByZoneID:(id)arg1;
- (id)validPCSByZoneID;
- (void)setInvalidPCSByZoneID:(id)arg1;
- (id)invalidPCSByZoneID;
- (void)setIdentityStatus:(id)arg1;
- (id)identityStatus;
- (void)setPcsDiagnosticInfo:(id)arg1;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (id)pcsDiagnosticInfo;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setRecordZoneIDs:(id)arg1;
- (id)recordZoneIDs;
- (void)main;
- (void).cxx_destruct;

@end