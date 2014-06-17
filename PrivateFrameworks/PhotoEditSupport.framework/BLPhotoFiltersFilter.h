/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIImage, NSNumber, CIFilter;

@interface BLPhotoFiltersFilter : CIFilter  {
    bool_needsReprocess;
    int _lastAmount;
    float _lastStrength;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputStrength;
    CIFilter *_ciPhotoEffectFilter;
    CIFilter *_ciMatrix;
    CIFilter *_maskFilter;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputAmount;
@property(copy) NSNumber * inputStrength;
@property(retain) CIFilter * ciPhotoEffectFilter;
@property(retain) CIFilter * ciMatrix;
@property(retain) CIFilter * maskFilter;


- (id)ciPhotoEffectFilter;
- (void)setCiPhotoEffectFilter:(id)arg1;
- (void)setCiMatrix:(id)arg1;
- (id)ciMatrix;
- (id)maskFilter;
- (void)setMaskFilter:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (id)inputStrength;
- (id)inputAmount;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)init;
- (void).cxx_destruct;

@end