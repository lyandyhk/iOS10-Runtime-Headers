/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFImage : NSObject <NSSecureCoding> {
    NSString * _contentType;
    double  _cornerRadius;
    NSData * _imageData;
    bool  _isTemplate;
    NSString * _keyColor;
    double  _scale;
    bool  _shouldCropToCircle;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSString *contentType;
@property (nonatomic) double cornerRadius;
@property (retain) NSData *imageData;
@property (nonatomic) bool isTemplate;
@property (nonatomic, retain) NSString *keyColor;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)imageWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentType;
- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (bool)isTemplate;
- (id)keyColor;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)arg1;
- (void)loadImageDataWithCompletionHandler:(id /* block */)arg1;
- (double)scale;
- (void)setContentType:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setKeyColor:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldCropToCircle;
- (struct CGSize { double x1; double x2; })size;

@end
