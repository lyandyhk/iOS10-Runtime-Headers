/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCachingImageManager : PHImageManager  {
    bool_allowsCachingHighQualityImages;
}

@property bool allowsCachingHighQualityImages;


- (void)stopCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (bool)allowsCachingHighQualityImages;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)approximateThumbnailIndexesForAssets:(id)arg1;
- (bool)canAvoidTouchingAssetsWithTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3 outBestFormat:(int*)arg4 outBestFormatIsTable:(bool*)arg5 outDegradedFormat:(int*)arg6 outDegradedFormatIsTable:(bool*)arg7;
- (id)_highPriorityRequestWaitGroup;
- (void)setAllowsCachingHighQualityImages:(bool)arg1;
- (id)init;
- (id)description;

@end