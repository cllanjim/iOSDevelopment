/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView {
    int _applicationDeactivationReason;
    BOOL m_activeFlattened;
    BOOL m_alertFlattened;
    BOOL m_animating;
    UISelectionGrabberDot *m_dotView;
    BOOL m_isDotted;
    BOOL m_navigationTransitionFlattened;
    int m_orientation;
}

@property BOOL activeFlattened;
@property BOOL alertFlattened;
@property BOOL animating;
@property(readonly) UITextRangeView * hostView;
@property BOOL isDotted;
@property BOOL navigationTransitionFlattened;
@property int orientation;

+ (id)_grabberDot;

- (id)_dotView;
- (BOOL)activeFlattened;
- (BOOL)alertFlattened;
- (BOOL)animating;
- (BOOL)autoscrolled;
- (void)canExpandAfterAlert:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (BOOL)clipDot:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (BOOL)dotIsVisbleInDocument:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hostView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)inputViewIsChanging;
- (BOOL)isDotted;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;
- (BOOL)isPointedUp;
- (BOOL)isRotating;
- (BOOL)isScaling;
- (BOOL)isScrolling;
- (BOOL)isVertical;
- (void)mustFlattenForAlert:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (BOOL)navigationTransitionFlattened;
- (int)orientation;
- (void)removeFromSuperview;
- (void)saveDeactivationReason:(id)arg1;
- (BOOL)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setActiveFlattened:(BOOL)arg1;
- (void)setAlertFlattened:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIsDotted:(BOOL)arg1;
- (void)setNavigationTransitionFlattened:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)updateDot;

@end