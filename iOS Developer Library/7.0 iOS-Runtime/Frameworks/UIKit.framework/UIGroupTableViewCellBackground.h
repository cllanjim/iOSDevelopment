/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIView;

@interface UIGroupTableViewCellBackground : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int selected : 1; 
    int _animationCount;
    UIView *_bottomSeparatorView;
    } _groupBackgroundFlags;
    int _newSectionLocation;
    float _sectionBorderWidth;
    int _sectionLocation;
    int _selectionStyle;
    UIColor *_selectionTintColor;
    } _separatorInset;
    int _separatorStyle;
    UIView *_topSeparatorView;
}

@property float sectionBorderWidth;
@property int sectionLocation;
@property(getter=isSelected) BOOL selected;
@property int selectionStyle;
@property(retain) UIColor * selectionTintColor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } separatorInset;
@property int separatorStyle;

+ (void)_flushCacheOnNotification:(id)arg1;
+ (void)initialize;

- (id)_backgroundColor;
- (id)_bottomShadowColor;
- (id)_cachedImageForKey:(id)arg1;
- (id)_contentMaskLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForContentHeight:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsCenter:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsRect:(BOOL)arg1;
- (void)_decrementAnimationCount;
- (id)_fillColor;
- (void)_incrementAnimationCount;
- (void)_layoutSubviews:(BOOL)arg1;
- (float)_pixelDisplayedImageHeight;
- (id)_roundedRectBezierPathInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSectionLocation:(int)arg2 forBorder:(BOOL)arg3 cornerRadiusAdjustment:(float)arg4;
- (id)_sectionBorderColor;
- (id)_separatorColor;
- (void)_setSectionLocationAnimationDidStop;
- (id)_topShadowColor;
- (id)_topShadowViewWithColor:(id)arg1;
- (void)_updateSeparatorViews;
- (id)backgroundColor;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (float)sectionBorderWidth;
- (int)sectionLocation;
- (int)selectionStyle;
- (id)selectionTintColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })separatorInset;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSectionBorderWidth:(float)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)setSectionLocation:(int)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)setSelectionTintColor:(id)arg1 layoutSubviews:(BOOL)arg2;
- (void)setSelectionTintColor:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSeparatorStyle:(int)arg1;

@end