/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, UINavigationBar, UIProgressIndicator, UITableView, UITextLabel, UIView;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_backgroundView;
    UITextLabel *_loadingLabel;
    UINavigationBar *_navigationBar;
    UIProgressIndicator *_progressIndicator;
    UITableView *_table;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_exitAnimated:(BOOL)arg1;
- (void)_setCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)addLoadingUI;
- (void)dealloc;
- (void)didChangeToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)removeLoadingUI;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;

@end