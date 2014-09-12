/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary, UITransitionView;

@interface PLUIController : NSObject  {
    id _delegate;
    UITransitionView *_fullScreenTransitionView;
    NSDictionary *_configuration;
}

+ (id)sharedInstance;

- (id)contentViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (void)setConfiguration:(id)arg1;

@end