/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {
    id destination;
    NSString *label;
    id source;
}

- (void)connect;
- (void)connectForSimulator;
- (void)dealloc;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setDestination:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end