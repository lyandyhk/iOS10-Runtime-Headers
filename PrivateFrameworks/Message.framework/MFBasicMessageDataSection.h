/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {
    NSData *_data;
    BOOL _complete;
    BOOL _partial;
    NSString *_partName;
}

@property(getter=isPartial) BOOL partial;
@property(getter=isComplete) BOOL complete;
@property(retain) NSData * data;
@property(retain) NSString * partName;


- (void)setPartName:(id)arg1;
- (void)setPartial:(BOOL)arg1;
- (BOOL)isComplete;
- (id)partName;
- (BOOL)isPartial;
- (void)setData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)setComplete:(BOOL)arg1;

@end