/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMDistanceCalculator : NSObject {
    NSLocale * _locale;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) int measurementSystem;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned int)arg2 fractionDigits:(unsigned int)arg3;
- (id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2;
- (double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)init;
- (id)initWithDefaultsSuiteName:(id)arg1;
- (id)locale;
- (id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (int)measurementSystem;
- (void)setLocale:(id)arg1;
- (void)setMeasurementSystem:(int)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end