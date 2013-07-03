/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {
    float _fontSize;
    int _fontWeight;
    int _numberOfLines;
    NSString *_text;
    unsigned char _textAlignment;
    float _width;
}

@property float fontSize;
@property int fontWeight;
@property unsigned char textAlignment;
@property int numberOfLines;
@property(copy) NSString * text;
@property float width;
@property(readonly) Class layoutClass;


- (Class)layoutClass;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setFontWeight:(int)arg1;
- (int)fontWeight;
- (id)text;
- (float)fontSize;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFontSize:(float)arg1;
- (int)numberOfLines;
- (void)setNumberOfLines:(int)arg1;
- (unsigned char)textAlignment;
- (void)setTextAlignment:(unsigned char)arg1;
- (void)setText:(id)arg1;

@end