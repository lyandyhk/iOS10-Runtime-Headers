/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpaceRemoteViewController : _UIRemoteViewController {
    <ADAdSpaceRemoteViewControllerDelegate> *_delegate;
}

@property (nonatomic) <ADAdSpaceRemoteViewControllerDelegate> *delegate;

+ (void)adSpaceRemoteViewControllerWithCompletionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end