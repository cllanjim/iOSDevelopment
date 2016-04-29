/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {
    UICompletionTablePrivate *_private;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } scrollIndicatorInsets;
@property(readonly) Class superclass;

+ (id)_cellFont;
+ (id)_shadowImage;

- (id)_completionForRow:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollIndicatorInsets;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTopStrokeColor:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end