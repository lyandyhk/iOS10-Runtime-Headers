/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULinearRegressionModel : TSURegressionModel {
    BOOL mAffine;
    double *mCoefficients;
    double *mCoefficientsStandardErrors;
    double mDegreesFreedom;
    double mErrorSumSquares;
    double mFStatistic;
    double mIntercept;
    int mNumCoefficients;
    double mRSquared;
    double mRegressionSumSquares;
    double mStandardError;
}

- (double)coefficientAtIndex:(int)arg1;
- (double)coefficientStandardErrorAtIndex:(int)arg1;
- (void)dealloc;
- (double)degreesFreedom;
- (double)errorSumSquares;
- (double)estimateForX:(double*)arg1;
- (double)fStatistic;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(BOOL)arg5 desiredIntercept:(double)arg6;
- (int)numCoefficients;
- (double)rSquared;
- (double)regressionSumSquares;
- (int)regressionType;
- (double)standardError;

@end