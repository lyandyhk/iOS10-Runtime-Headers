/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@class NSDictionary;

@interface DataClassMigrator : NSObject  {
    NSDictionary *_context;
}

@property(retain) NSDictionary * context;
@property(readonly) BOOL didRestoreFromBackup;
@property(readonly) BOOL didMigrateBackupFromDifferentDevice;
@property(readonly) BOOL didRestoreFromCloudBackup;
@property(readonly) BOOL shouldPreserveSettingsAfterRestore;
@property(readonly) BOOL wasPasscodeSetInBackup;


- (id)context;
- (float)migrationProgress;
- (float)estimatedDuration;
- (BOOL)performMigration;
- (id)dataClassName;
- (BOOL)wasPasscodeSetInBackup;
- (BOOL)shouldPreserveSettingsAfterRestore;
- (BOOL)didRestoreFromCloudBackup;
- (BOOL)didMigrateBackupFromDifferentDevice;
- (BOOL)didRestoreFromBackup;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;

@end