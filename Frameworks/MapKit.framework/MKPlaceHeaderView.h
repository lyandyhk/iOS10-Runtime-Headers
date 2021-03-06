/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderView : UIView <MKPlaceHeaderBackgroundViewDelegate, MKPlaceHeaderViewCinematics, MKStackingViewControllerSizableView> {
    MKPlaceHeaderBackgroundView * _background;
    long long  _backgroundTypeOverride;
    UILayoutGuide * _centeringLayoutGuide_Bottom;
    UILayoutGuide * _centeringLayoutGuide_Top;
    bool  _compressedMode;
    <MKPlaceHeaderViewDelegate> * _delegate;
    NSLayoutConstraint * _distanceLabelToBottomConstraint;
    NSLayoutConstraint * _distanceLabelToTitleConstraint;
    struct _MKUILabel { Class x1; } * _distanceToPlaceLabel;
    _MKEnvironmentLabel * _environmentLabel;
    NSArray * _environmentsLabelConstraints;
    struct { 
        unsigned int isPresenting; 
    }  _headerViewFlags;
    bool  _isTranitLine;
    NSArray * _labelWidthConstraints;
    MKMapItem * _mapItem;
    bool  _needsToUpdateTitleLabel;
    bool  _needsToUpdateTransitLabel;
    MKPlaceHeaderBackgroundView * _oldBackground;
    MKStarRatingAndLabelView * _ratingView;
    NSLayoutConstraint * _ratingViewToBottomConstraint;
    NSLayoutConstraint * _ratingViewToDistanceLabelConstraint;
    NSLayoutConstraint * _ratingViewToTitleConstraint;
    UIFont * _reviewsFont;
    UIView * _screen;
    UIFont * _subtitleFont;
    UIFont * _titleFont;
    struct _MKUILabel { Class x1; } * _titleLabel;
    NSLayoutConstraint * _titleToBottomConstraint;
    NSLayoutConstraint * _topBottomDifferenceConstraint;
    NSLayoutConstraint * _topSpacerToTitleConstraint;
    NSLayoutConstraint * _topToTransitViewConstraint_Shield;
    NSLayoutConstraint * _topToTransitViewConstraint_Text;
    UIFont * _transitFont;
    MKTransitInfoLabelView * _transitInfoView;
    NSLayoutConstraint * _transitViewToBottomConstraint_Shield;
    NSLayoutConstraint * _transitViewToBottomConstraint_Text;
    NSLayoutConstraint * _transitViewToDistanceLabelConstraint_Shield;
    NSLayoutConstraint * _transitViewToDistanceLabelConstraint_Text;
    NSLayoutConstraint * _transitViewToTitleConstraint_Shield;
    NSLayoutConstraint * _transitViewToTitleConstraint_Text;
    NSMutableArray * _viewDidAppearBlocks;
    NSMutableArray * _viewsToAnimate;
}

@property (nonatomic) long long backgroundTypeOverride;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *labelWidthConstraints;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool needsToUpdateTitleLabel;
@property (nonatomic) bool needsToUpdateTransitLabel;
@property (nonatomic) unsigned long long numberOfReviews;
@property (nonatomic) double rating;
@property (nonatomic, copy) NSString *reviewsSourceName;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *transitLabelItems;
@property (nonatomic, retain) NSMutableArray *viewDidAppearBlocks;

- (void).cxx_destruct;
- (void)_configureLabelForHeader:(id)arg1;
- (void)_didAppearAfterSettingMapItemAnimated:(bool)arg1;
- (struct _MKUILabel { Class x1; }*)_newInfoLabel;
- (void)_performWhenViewHasAppeared:(id /* block */)arg1;
- (void)_updateCurrentEnvironmentName;
- (void)_updateFontBasedConstraints;
- (void)_updateFonts;
- (void)addConstraints;
- (void)addContent;
- (long long)backgroundTypeOverride;
- (void)dealloc;
- (id)delegate;
- (void)headerViewBackgroundDidFinishLoading:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCompressedMode:(bool)arg2 isTransitLine:(bool)arg3;
- (id)labelWidthConstraints;
- (void)layoutSubviews;
- (id)mapItem;
- (bool)needsToUpdateTitleLabel;
- (bool)needsToUpdateTransitLabel;
- (unsigned long long)numberOfReviews;
- (void)pause;
- (void)pauseAnimations;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveTransform;
- (void)prepareForPresentation;
- (void)present;
- (void)presentAnimated:(bool)arg1;
- (void)presentBackgroundIfNeeded;
- (double)rating;
- (void)refreshContent;
- (void)reset;
- (void)resetAnimations;
- (void)resetViewDidAppear;
- (void)restartAnimations;
- (void)resume;
- (void)resumeAnimations;
- (id)reviewsSourceName;
- (void)setBackgroundTypeOverride:(long long)arg1;
- (void)setBackgroundViewTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelWidthConstraints:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setNeedsToUpdateTitleLabel:(bool)arg1;
- (void)setNeedsToUpdateTransitLabel:(bool)arg1;
- (void)setNumberOfReviews:(unsigned long long)arg1;
- (void)setRating:(double)arg1;
- (void)setReviewsSourceName:(id)arg1;
- (void)setShowInlineMapInHeader:(bool)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransitLabelItems:(id)arg1;
- (void)setViewDidAppearBlocks:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subTitle;
- (id)subtitleFont;
- (id)title;
- (id)transitLabelItems;
- (void)updateConstraints;
- (void)updateHiddenAttributeForLabels;
- (void)updateTitleLabel;
- (void)updateTransitLabel;
- (void)viewDidAppear:(bool)arg1;
- (id)viewDidAppearBlocks;
- (id)viewsForPresentation;

@end
