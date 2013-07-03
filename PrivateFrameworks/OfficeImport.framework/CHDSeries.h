/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDKeyedCollection, CHDFormula, CHDData, CHDDataLabel, CHDErrorBar, CHDChartType, CHDDataValue, CHDChart, OADGraphicProperties, EDCollection;

@interface CHDSeries : NSObject <EDKeyedObject> {
    CHDChart *mChart;
    CHDChartType *mChartType;
    unsigned int mOrder;
    unsigned int mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    boolmDateTimeFormattingFlag;
    boolmHiddenFlag;
}

+ (id)seriesWithChart:(id)arg1;

- (id)defaultSeriesNameForIndex:(unsigned int)arg1;
- (bool)hasErrorBars;
- (bool)hasTrendlines;
- (void)setTrendlineCollection:(id)arg1;
- (void)setDataValuePropertiesCollection:(id)arg1;
- (void)clearBackPointers;
- (void)setErrorBarXAxis:(id)arg1;
- (void)setErrorBarYAxis:(id)arg1;
- (unsigned int)categoryCount;
- (id)shallowCopy;
- (void)setDateTimeFormattingFlag:(bool)arg1;
- (id)trendlineCollection;
- (void)setStyleIndex:(unsigned int)arg1;
- (void)setHiddenFlag:(bool)arg1;
- (void)setCategoryData:(id)arg1;
- (void)setValueData:(id)arg1;
- (void)setErrorBar:(id)arg1;
- (unsigned int)styleIndex;
- (id)errorBarXAxis;
- (void)setGraphicProperties:(id)arg1;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setChartType:(id)arg1;
- (void)setLastCachedName:(id)arg1;
- (id)initWithChart:(id)arg1;
- (id)chart;
- (id)errorBarYAxis;
- (id)defaultDataLabel;
- (id)valueData;
- (id)dataValuePropertiesCollection;
- (id)chartType;
- (bool)isDateTimeFormattingFlag;
- (id)categoryData;
- (id)lastCachedName;
- (id)graphicProperties;
- (void)setOrder:(unsigned int)arg1;
- (bool)isHidden;
- (bool)isEmpty;
- (id)name;
- (void)dealloc;
- (unsigned int)order;
- (void)setName:(id)arg1;
- (int)key;

@end