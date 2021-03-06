/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKImageElement : IKViewElement {
    NSURL * _defaultURL;
    unsigned long long  _imageType;
    double  _srcHeight;
    double  _srcWidth;
    NSDictionary * _srcset;
}

@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, retain) NSURL *defaultURL;
@property (nonatomic, readonly) long long fill;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, readonly, retain) NSURL *placeholderURL;
@property (nonatomic, readonly) unsigned long long position;
@property (nonatomic, readonly) long long reflect;
@property (nonatomic, readonly, retain) NSDictionary *srcset;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) double width;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (unsigned long long)_imageTypeForTagName:(id)arg1;
- (id)borderColor;
- (id)defaultURL;
- (long long)fill;
- (double)height;
- (unsigned long long)imageType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)placeholderURL;
- (unsigned long long)position;
- (long long)reflect;
- (void)setDefaultURL:(id)arg1;
- (id)srcset;
- (id)url;
- (double)width;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

- (long long)accessoryType;
- (id)artworkCatalog;
- (id)bestURL;
- (id)cachePath;
- (id)resourceImage;

@end
