/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImage, NSString, UIImageView;

@interface PLPersonTableViewCell : UITableViewCell  {
    UIImage *_personIcon;
    NSString *_personFirstName;
    NSString *_personLastName;
    UIImageView *__personIconImageView;
    UIImage *__personMonogramImage;
}

@property(retain) UIImage * personIcon;
@property(copy) NSString * personFirstName;
@property(copy) NSString * personLastName;
@property(setter=_setPersonIconImageView:,retain) UIImageView * _personIconImageView;
@property(setter=_setPersonMonogramImage:,retain) UIImage * _personMonogramImage;


- (void)_setPersonIconImageView:(id)arg1;
- (void)_updatePersonIconImageView;
- (void)_setPersonMonogramImage:(id)arg1;
- (id)personLastName;
- (id)personFirstName;
- (id)_personMonogramImage;
- (id)personIcon;
- (id)_personIconImageView;
- (void)setPersonLastName:(id)arg1;
- (void)setPersonFirstName:(id)arg1;
- (void)setPersonIcon:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end